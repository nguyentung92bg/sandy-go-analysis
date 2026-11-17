/* IL2CPP: Dino.BusSand.View.VehicleBatch$$OnDestroy
void Dino_BusSand_View_VehicleBatch__OnDestroy (Dino_BusSand_View_VehicleBatch_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleBatch$$OnDestroy
   void Dino_BusSand_View_VehicleBatch__OnDestroy (Dino_BusSand_View_VehicleBatch_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_VehicleBatch__OnDestroy_23ef924(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04cbc2c8;
  if ((bRam0000000004f9cab5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc2c8);
    bRam0000000004f9cab5 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9cb0a == '\0') {
    FUN_02132f7c(PTR_DAT_04cbc2c8);
    cRam0000000004f9cb0a = '\x01';
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,param_1,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9cb09 == '\0') {
      FUN_02132f7c(PTR_DAT_04cbc2c8);
      cRam0000000004f9cb09 = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
    *puVar5 = 0;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                   ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  return;
}

