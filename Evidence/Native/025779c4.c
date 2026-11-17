/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$.cctor
void Dino_Tracking_CustomTrackingParameters___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.CustomTrackingParameters$$.cctor
   void Dino_Tracking_CustomTrackingParameters___cctor (const MethodInfo* method); */

void Dino_Tracking_CustomTrackingParameters___cctor_24779c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_04cc1900;
  puVar2 = PTR_DAT_04cc18f8;
  puVar1 = PTR_DAT_04cc18d8;
  if ((bRam0000000004f9cedd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc18d8);
    FUN_02132f7c(PTR_DAT_04cc1900);
    FUN_02132f7c(PTR_DAT_04cc18f8);
    bRam0000000004f9cedd = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_KeyValuePair_object__DinoTrackingParameter_____ctor_396cc18
            (uVar4,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
  uVar5 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (uVar5 >> 0xc & 0x3f),(uVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

