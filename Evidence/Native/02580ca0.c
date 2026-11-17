/* IL2CPP: Dino.Tracking.TrackingSinkRouter$$.cctor
void Dino_Tracking_TrackingSinkRouter___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingSinkRouter$$.cctor
   void Dino_Tracking_TrackingSinkRouter___cctor (const MethodInfo* method); */

void Dino_Tracking_TrackingSinkRouter___cctor_2480ca0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar3 = PTR_DAT_04cc22a0;
  puVar2 = PTR_DAT_04cc2298;
  puVar1 = PTR_DAT_04cbf3d8;
  if ((bRam0000000004f9cfa2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc22a0);
    FUN_02132f7c(PTR_DAT_04cc2298);
    FUN_02132f7c(PTR_DAT_04cbf3d8);
    bRam0000000004f9cfa2 = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a81404(uVar4,2,*(undefined8 *)puVar3);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar5 = uVar4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

