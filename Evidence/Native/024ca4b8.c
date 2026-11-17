/* IL2CPP: Dino.BusSand.View.MechanicLayer$$ShrinkAway
void Dino_BusSand_View_MechanicLayer__ShrinkAway (Dino_BusSand_View_MechanicLayer_o* __this, UnityEngine_Transform_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$ShrinkAway
   void Dino_BusSand_View_MechanicLayer__ShrinkAway (Dino_BusSand_View_MechanicLayer_o* __this,
   UnityEngine_Transform_o* p, const MethodInfo* method); */

long Dino_BusSand_View_MechanicLayer__ShrinkAway_23ca4b8
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  
  puVar1 = PTR_DAT_04cbd370;
  if ((bRam0000000004f9c9de & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cbd378);
    FUN_02132f7c(PTR_DAT_04cbd380);
    FUN_02132f7c(PTR_DAT_04cbd370);
    bRam0000000004f9c9de = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_View_MechanicLayer___c__DisplayClass97_0___ctor_23d5be0(lVar5,0);
  if (lVar5 != 0) {
    plVar8 = (long *)(lVar5 + 0x10);
    *plVar8 = param_5;
    thunk_FUN_02134474(plVar8,param_5);
    puVar4 = PTR_DAT_04cbd380;
    puVar3 = PTR_DAT_04cbd378;
    puVar2 = PTR_DAT_04cac208;
    puVar1 = PTR_DAT_04caa458;
    if (*plVar8 != 0) {
      uVar9 = UnityEngine_Transform__get_localScale_43d1b0c(*plVar8,0);
      uVar6 = *(undefined8 *)puVar2;
      *(undefined4 *)(lVar5 + 0x18) = uVar9;
      *(undefined4 *)(lVar5 + 0x1c) = param_2;
      *(undefined4 *)(lVar5 + 0x20) = param_3;
      uVar6 = thunk_FUN_0216e89c(uVar6);
      System_Action_float____ctor_35f1448(uVar6,lVar5,*(undefined8 *)puVar3,0);
      lVar7 = Dino_BusSand_Tween__Value_238bbfc(_UNK_00e20590,uVar6,0);
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      System_Action___ctor_47b5ed0(uVar6,lVar5,*(undefined8 *)puVar4,0);
      if ((lVar7 != 0) && (lVar5 = Dino_BusSand_Tween__OnDone_238bb74(lVar7,uVar6,0), lVar5 != 0)) {
        *(undefined8 *)(lVar5 + 0x18) = param_4;
        thunk_FUN_02134474((undefined8 *)(lVar5 + 0x18),param_4,0);
        return lVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

