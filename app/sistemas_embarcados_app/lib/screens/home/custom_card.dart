import 'package:flutter/material.dart';

class CustomCard extends StatelessWidget {

  final String text;
  final IconData icon;
  final String value;

  const CustomCard({Key? key, required this.icon, required this.text, required this.value}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container(
      padding: const EdgeInsets.all(10),
      child: Card(
        color: const Color(0xFF01d6ef),
        child: Padding(
          padding: const EdgeInsets.all(20.0),
          child: Column(
            children: [
              Row(
                mainAxisSize: MainAxisSize.min,
                children: [
                  Icon(
                    icon,
                    size: 40,
                    color: Colors.white,
                  ),
                  Text(
                    text + ':',
                    style: const TextStyle(
                        color: Colors.white,
                        fontSize: 30
                    ),
                  ),
                ],
              ),
              Text(
                value,
                style: const TextStyle(
                    color: Colors.white,
                    fontSize: 30
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
