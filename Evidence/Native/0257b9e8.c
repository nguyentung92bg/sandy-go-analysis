/* IL2CPP: Dino.Tracking.AdCompleteOptions$$set_AdNetwork
void Dino_Tracking_AdCompleteOptions__set_AdNetwork (Dino_Tracking_AdCompleteOptions_o __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.AdCompleteOptions$$set_AdNetwork
   void Dino_Tracking_AdCompleteOptions__set_AdNetwork (Dino_Tracking_AdCompleteOptions_o __this,
   System_String_o* value, const MethodInfo* method); */

void Dino_Tracking_AdCompleteOptions__set_AdNetwork_247b9e8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *puVar1 = param_2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

