/* IL2CPP: Dino.Tracking.EventStartOptions$$set_Placement
void Dino_Tracking_EventStartOptions__set_Placement (Dino_Tracking_EventStartOptions_o __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.EventStartOptions$$set_Placement
   void Dino_Tracking_EventStartOptions__set_Placement (Dino_Tracking_EventStartOptions_o __this,
   System_String_o* value, const MethodInfo* method); */

void Dino_Tracking_EventStartOptions__set_Placement_247f4b4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = param_2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

