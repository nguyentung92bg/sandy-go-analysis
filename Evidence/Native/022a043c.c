/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerHallButton$$SetFill
void Dino_BusSand_App_UI_ClimbTowerHallButton__SetFill (float v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerHallButton$$SetFill
   void Dino_BusSand_App_UI_ClimbTowerHallButton__SetFill (float v, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerHallButton__SetFill_21a043c(float param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  
  puVar3 = PTR_DAT_04cae6e8;
  if ((bRam0000000004f9ba16 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae6e8);
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadc78);
    bRam0000000004f9ba16 = 1;
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_04cadc78;
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    uVar5 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)PTR_DAT_04cadc78,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar4);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    plVar7 = (long *)0x0;
    if ((uVar6 & 1) != 0) {
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar3;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if ((lVar4 == 0) ||
         (lVar4 = UnityEngine_Transform__Find_43d4bec(lVar4,*(undefined8 *)puVar2,0), lVar4 == 0))
      goto LAB_022a05a8;
      plVar7 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                                 (lVar4,*(undefined8 *)PTR_DAT_04cad788);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(plVar7,0,0);
    puVar3 = PTR_DAT_04cfca40;
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (plVar7 != (long *)0x0) {
      if ((bRam0000000004faae34 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cfca40,0);
        bRam0000000004faae34 = 1;
      }
      fVar8 = 1.0;
      if (param_1 <= 1.0) {
        fVar8 = param_1;
      }
      fVar9 = 0.0;
      if (0.0 <= param_1) {
        fVar9 = fVar8;
      }
      uVar6 = UnityEngine_UI_SetPropertyUtility__SetStruct_float__28b8684
                        (fVar9,(long)plVar7 + 0xf4,*(undefined8 *)puVar3);
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x045afcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x2f8))(plVar7,*(undefined8 *)(*plVar7 + 0x300));
        return;
      }
      return;
    }
  }
LAB_022a05a8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

