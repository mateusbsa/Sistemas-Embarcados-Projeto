import 'package:firebase_database/firebase_database.dart';
import 'package:flutter/material.dart';
import 'package:sistemas_embarcados_app/screens/home/custom_card.dart';

class HomeScreen extends StatelessWidget {
  HomeScreen({Key? key}) : super(key: key);

  final DatabaseReference database = FirebaseDatabase.instance.ref().child('/sensores');

  // database.child('/sensores').set({
  //   'temperatura' : 4,
  //   'umidade' : 3
  // });

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: const Color(0xFF1B1D21),
      appBar: AppBar(
        backgroundColor: const Color(0xFF12151D),
        title: const Text(
          'Sistemas Embarcados',
          style: TextStyle(color: Colors.white),
        ),
        centerTitle: true,
      ),
      body: StreamBuilder(
        stream: database.onValue,
        builder: (context, snapshot) {
          switch (snapshot.connectionState) {
            case ConnectionState.none:
            case ConnectionState.waiting:
              return const Center(
                child: CircularProgressIndicator(
                  backgroundColor: Color(0xFF01d6ef),
                  valueColor: AlwaysStoppedAnimation<Color>(
                    Colors.white,
                  ),
                ),
              );
            case ConnectionState.done:
            case ConnectionState.active:
            var databaseEvent = snapshot.data!;
            print(databaseEvent);
              return Center(
                child: Column(
                  mainAxisAlignment: MainAxisAlignment.center,
                  children: [
                    CustomCard(icon: Icons.thermostat_auto_rounded, text: '  Temperatura', value: '30'),
                    CustomCard(icon: Icons.cloud_rounded, text: '  Umidade', value: '15'),
                  ],
                ),
              );
          }
        },
      ),
    );
  }
}
