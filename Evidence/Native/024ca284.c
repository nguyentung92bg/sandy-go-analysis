/* IL2CPP: Dino.BusSand.View.MechanicLayer$$RetractHose
void Dino_BusSand_View_MechanicLayer__RetractHose (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_View_MechanicLayer_Deco_o* d, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$RetractHose
   void Dino_BusSand_View_MechanicLayer__RetractHose (Dino_BusSand_View_MechanicLayer_o* __this,
   Dino_BusSand_View_MechanicLayer_Deco_o* d, const MethodInfo* method); */

ulong Dino_BusSand_View_MechanicLayer__RetractHose_23ca284(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04cbd358;
  if ((bRam0000000004f9c9dd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd360);
    FUN_02132f7c(PTR_DAT_04cbd368);
    FUN_02132f7c(PTR_DAT_04cbd358);
    bRam0000000004f9c9dd = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_View_MechanicLayer___c__DisplayClass94_0___ctor_23d5a00(lVar2,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_2 == 0) {
LAB_024ca4b4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x70);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
    if ((uVar3 & 1) == 0) {
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 0x68);
        thunk_FUN_02134474();
        *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_2 + 0x70);
        thunk_FUN_02134474();
        uVar5 = *(undefined8 *)(param_2 + 0x78);
        *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_2 + 0x80);
        *(undefined8 *)(lVar2 + 0x20) = uVar5;
        uVar5 = *(undefined8 *)(param_2 + 0x84);
        *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)(param_2 + 0x8c);
        *(undefined8 *)(lVar2 + 0x2c) = uVar5;
        uVar5 = *(undefined8 *)(param_2 + 0x90);
        *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(param_2 + 0x98);
        *(undefined8 *)(lVar2 + 0x38) = uVar5;
        uVar5 = *(undefined8 *)(param_2 + 0x9c);
        *(undefined4 *)(lVar2 + 0x4c) = *(undefined4 *)(param_2 + 0xa4);
        *(undefined8 *)(lVar2 + 0x44) = uVar5;
        *(undefined8 *)(param_2 + 0x68) = 0;
        thunk_FUN_02134474((undefined8 *)(param_2 + 0x68),0);
        *(undefined8 *)(param_2 + 0x50) = 0;
        thunk_FUN_02134474((undefined8 *)(param_2 + 0x50),0);
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
        System_Action_float____ctor_35f1448(uVar5,lVar2,*(undefined8 *)PTR_DAT_04cbd360,0);
        lVar4 = Dino_BusSand_Tween__Value_238bbfc(_UNK_00e20590,uVar5,0);
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar5,lVar2,*(undefined8 *)PTR_DAT_04cbd368,0);
        if ((lVar4 != 0) && (uVar3 = Dino_BusSand_Tween__OnDone_238bb74(lVar4,uVar5,0), uVar3 != 0))
        {
          *(undefined8 *)(uVar3 + 0x18) = param_1;
          thunk_FUN_02134474((undefined8 *)(uVar3 + 0x18),param_1,0);
          return uVar3;
        }
      }
      goto LAB_024ca4b4;
    }
  }
  return uVar3;
}

