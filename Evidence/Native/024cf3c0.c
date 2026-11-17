/* IL2CPP: Dino.BusSand.View.MechanicLayer$$AnimateBoom
void Dino_BusSand_View_MechanicLayer__AnimateBoom (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_View_MechanicLayer_LaneVis_o* lv, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$AnimateBoom
   void Dino_BusSand_View_MechanicLayer__AnimateBoom (Dino_BusSand_View_MechanicLayer_o* __this,
   Dino_BusSand_View_MechanicLayer_LaneVis_o* lv, const MethodInfo* method); */

ulong Dino_BusSand_View_MechanicLayer__AnimateBoom_23cf3c0
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_DAT_04cbd548;
  if ((bRam0000000004f9c9f3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd550);
    FUN_02132f7c(PTR_DAT_04cbd558);
    FUN_02132f7c(PTR_DAT_04cbd548);
    bRam0000000004f9c9f3 = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_View_MechanicLayer___c__DisplayClass126_0___ctor_23d4ef8(lVar2,0);
  if (param_6 != 0) {
    uVar6 = *(undefined8 *)(param_6 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      return uVar3;
    }
    if (lVar2 != 0) {
      plVar5 = (long *)(lVar2 + 0x10);
      *plVar5 = *(long *)(param_6 + 0x28);
      thunk_FUN_02134474(plVar5);
      if (*plVar5 != 0) {
        uVar7 = UnityEngine_Transform__get_rotation_43d133c(*plVar5,0);
        *(undefined4 *)(lVar2 + 0x24) = uVar7;
        *(undefined4 *)(lVar2 + 0x28) = param_2;
        *(undefined4 *)(lVar2 + 0x2c) = param_3;
        *(undefined4 *)(lVar2 + 0x30) = param_4;
        if (*(long *)(lVar2 + 0x10) != 0) {
          uVar7 = UnityEngine_Transform__get_forward_43d17f4(*(long *)(lVar2 + 0x10),0);
          puVar1 = PTR_DAT_04cac208;
          *(undefined4 *)(lVar2 + 0x18) = uVar7;
          *(undefined4 *)(lVar2 + 0x1c) = param_2;
          *(undefined4 *)(lVar2 + 0x20) = param_3;
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
          System_Action_float____ctor_35f1448(uVar6,lVar2,*(undefined8 *)PTR_DAT_04cbd550,0);
          lVar4 = Dino_BusSand_Tween__Value_238bbfc(_UNK_00e1fea8,uVar6,0);
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar6,lVar2,*(undefined8 *)PTR_DAT_04cbd558,0);
          if ((lVar4 != 0) &&
             (uVar3 = Dino_BusSand_Tween__OnDone_238bb74(lVar4,uVar6,0), uVar3 != 0)) {
            *(undefined8 *)(uVar3 + 0x18) = param_5;
            thunk_FUN_02134474((undefined8 *)(uVar3 + 0x18),param_5,0);
            return uVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

