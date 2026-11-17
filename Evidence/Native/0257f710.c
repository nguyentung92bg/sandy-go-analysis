/* IL2CPP: Dino.Tracking.TrackingService$$OnEnable
void Dino_Tracking_TrackingService__OnEnable (Dino_Tracking_TrackingService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingService$$OnEnable
   void Dino_Tracking_TrackingService__OnEnable (Dino_Tracking_TrackingService_o* __this, const
   MethodInfo* method); */

void Dino_Tracking_TrackingService__OnEnable_247f710(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04cc21f8;
  if ((bRam0000000004f9cf92 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc21f8);
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04cc2200);
    FUN_02132f7c(PTR_DAT_04cc2208);
    bRam0000000004f9cf92 = 1;
  }
  lVar8 = *(long *)puVar1;
  *(undefined2 *)(param_1 + 0x24) = 0;
  lVar6 = *(long *)(lVar8 + 0x38);
  if (lVar6 == 0) {
    FUN_0216b4cc(lVar8);
    lVar6 = *(long *)(lVar8 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0216b470();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cc2208;
  puVar3 = PTR_DAT_04cc2200;
  puVar2 = PTR_DAT_04ca9b50;
  puVar1 = PTR_DAT_04ca9b08;
  lVar6 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0216b470();
  }
  *(undefined8 *)(param_1 + 0x30) = **(undefined8 **)(lVar6 + 0xb8);
  thunk_FUN_02134474();
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_Queue_TrackingService_PendingEvent____ctor_2ce6cd0
            (uVar5,0x40,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x38),uVar5);
  uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(uVar5,*(undefined8 *)puVar2);
  puVar7 = (undefined8 *)(param_1 + 0x40);
  *puVar7 = uVar5;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                 ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

