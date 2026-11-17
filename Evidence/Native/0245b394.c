/* IL2CPP: Dino.BusSand.Cheat.CheatHint$$Create
Dino_BusSand_Cheat_CheatHint_o* Dino_BusSand_Cheat_CheatHint__Create (UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatHint$$Create
   Dino_BusSand_Cheat_CheatHint_o* Dino_BusSand_Cheat_CheatHint__Create (UnityEngine_Transform_o*
   parent, const MethodInfo* method); */

long Dino_BusSand_Cheat_CheatHint__Create_235b394(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_04cad748;
  puVar1 = PTR_DAT_04cad730;
  if ((bRam0000000004f9c728 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9540);
    FUN_02132f7c(PTR_DAT_04cacf88);
    FUN_02132f7c(PTR_DAT_04cba430);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cba438);
    bRam0000000004f9c728 = 1;
  }
  plVar3 = (long *)FUN_02133068(*(undefined8 *)puVar2,1);
  uVar6 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  lVar4 = System_Type__GetTypeFromHandle_483f0b4(uVar6,0);
  if (plVar3 != (long *)0x0) {
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
      uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar6,0);
    }
    puVar2 = PTR_DAT_04cba438;
    puVar1 = PTR_DAT_04caa070;
    if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar3[4] = lVar4;
    thunk_FUN_02134474(plVar3 + 4,lVar4);
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_GameObject___ctor_43c2310(lVar4,*(undefined8 *)puVar2,plVar3,0);
    if ((lVar4 != 0) &&
       (lVar5 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0), puVar1 = PTR_DAT_04cacf88,
       lVar5 != 0)) {
      UnityEngine_Transform__SetParent_43d1e34(lVar5,param_1,0,0);
      lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar4,*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_04cb9540;
      if (lVar5 != 0) {
        UnityEngine_Canvas__set_renderMode_467f2b4(lVar5,0,0);
        UnityEngine_Canvas__set_sortingOrder_46800e4(lVar5,30000,0);
        lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar4,*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_04cba430;
        if (lVar5 != 0) {
          *(undefined4 *)(lVar5 + 0x20) = 1;
          UnityEngine_UI_CanvasScaler__set_referenceResolution_4682f88
                    (0x44870000,0x44f00000,lVar5,0);
          uVar6 = *(undefined8 *)puVar1;
          *(undefined4 *)(lVar5 + 0x38) = 0x3f000000;
          lVar5 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar4,uVar6);
          plVar3 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
          if (lVar5 != 0) {
            if (plVar3 == (long *)0x0) {
              *(undefined8 *)(lVar5 + 0x20) = 0;
            }
            else {
              lVar4 = *(long *)PTR_DAT_04cabdb0;
              if ((*plVar3 != lVar4) || (*(long **)(lVar5 + 0x20) = plVar3, *plVar3 != lVar4)) {
                    /* WARNING: Subroutine does not return */
                FUN_021335a4(plVar3);
              }
            }
            thunk_FUN_02134474(lVar5 + 0x20,plVar3);
            Dino_BusSand_Cheat_CheatHint__BuildHand_235b60c(lVar5);
            return lVar5;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

