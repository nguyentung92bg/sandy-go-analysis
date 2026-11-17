/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$Awake
void Dino_BusSand_App_Gameplay_GameplayController__Awake (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController$$Awake
   void Dino_BusSand_App_Gameplay_GameplayController__Awake
   (Dino_BusSand_App_Gameplay_GameplayController_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Gameplay_GameplayController__Awake_229cb24(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  puVar4 = PTR_DAT_04cac868;
  if ((bRam0000000004f9c234 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04cb5818);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cab200);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb2870);
    FUN_02132f7c(PTR_DAT_04cb5820);
    FUN_02132f7c(PTR_DAT_04cb5828);
    FUN_02132f7c(PTR_DAT_04cb5830);
    FUN_02132f7c(PTR_DAT_04cb5838);
    FUN_02132f7c(PTR_DAT_04cb5840);
    FUN_02132f7c(PTR_DAT_04cb5848);
    FUN_02132f7c(PTR_DAT_04cb5850);
    FUN_02132f7c(PTR_DAT_04cac868);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb27f8);
    FUN_02132f7c(PTR_DAT_04cab220);
    bRam0000000004f9c234 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c25e == '\0') {
    FUN_02132f7c(PTR_DAT_04cac868);
    cRam0000000004f9c25e = '\x01';
  }
  puVar3 = PTR_DAT_04cab208;
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar4;
  }
  **(long **)(lVar8 + 0xb8) = param_1;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar4 + 0xb8),param_1);
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar3;
  }
  puVar4 = PTR_DAT_04cb27f8;
  if (**(long **)(lVar8 + 0xb8) == 0) {
    uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab200);
    System_Func_object__object__object____ctor_37a6ad0(uVar9,0,*(undefined8 *)PTR_DAT_04cab220,0);
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar3;
    }
    **(undefined8 **)(lVar8 + 0xb8) = uVar9;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar9);
  }
  puVar3 = PTR_DAT_04cad568;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cabaf8;
  Dino_BusSand_RenderQuality__Initialize_238a2f8(0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar8 = Dino_BusSand_GameAudio__Create_237ddf4(0);
  iVar1 = *(int *)(*(long *)puVar4 + 0xe4);
  *(undefined1 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = 1;
  if (iVar1 == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar4;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if ((lVar10 != 0) && (lVar8 != 0)) {
    Dino_BusSand_GameAudio__SetSound_238544c(lVar8,*(undefined1 *)(lVar10 + 0x58),0);
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar4;
    }
    puVar3 = PTR_DAT_04cb2870;
    puVar4 = PTR_DAT_04cab238;
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (lVar8 != 0) {
      lVar10 = *(long *)PTR_DAT_04cab238;
      uVar2 = *(undefined1 *)(lVar8 + 0x5a);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar4;
      }
      puVar5 = PTR_DAT_04cb5820;
      puVar4 = PTR_DAT_04cac420;
      **(undefined1 **)(lVar10 + 0xb8) = uVar2;
      uVar9 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar3);
      }
      lVar8 = Dino_BusSand_View_GameView__Create_239a8f4(uVar9,0);
      plVar12 = (long *)(param_1 + 0x38);
      *plVar12 = lVar8;
      thunk_FUN_02134474(plVar12,lVar8);
      lVar8 = *plVar12;
      uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
      System_Action_bool____ctor_35ee0e8(uVar9,param_1,*(undefined8 *)puVar5,0);
      puVar5 = PTR_DAT_04cb5830;
      puVar3 = PTR_DAT_04caa458;
      if (lVar8 != 0) {
        Dino_BusSand_View_GameView__add_Ended_239a224(lVar8,uVar9,0);
        lVar8 = *(long *)(param_1 + 0x38);
        uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        System_Action___ctor_47b5ed0(uVar9,param_1,*(undefined8 *)puVar5,0);
        puVar5 = PTR_DAT_04cb5838;
        if (lVar8 != 0) {
          Dino_BusSand_View_GameView__add_RoadFullTapped_239a384(lVar8,uVar9,0);
          lVar8 = *(long *)(param_1 + 0x38);
          uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
          System_Action_bool____ctor_35ee0e8(uVar9,param_1,*(undefined8 *)puVar5,0);
          puVar5 = PTR_DAT_04cb5828;
          puVar4 = PTR_DAT_04cac7e0;
          if (lVar8 != 0) {
            Dino_BusSand_View_GameView__add_FeverChanged_239a77c(lVar8,uVar9,0);
            lVar8 = *(long *)(param_1 + 0x38);
            uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
            System_Action_int____ctor_35ef18c(uVar9,param_1,*(undefined8 *)puVar5,0);
            puVar6 = PTR_DAT_04cb5840;
            puVar5 = PTR_DAT_04cb5818;
            if (lVar8 != 0) {
              Dino_BusSand_View_GameView__add_Tapped_23a1680(lVar8,uVar9,0);
              lVar8 = *(long *)(param_1 + 0x38);
              uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar5);
              System_Action_int__object____ctor_35f6fc8(uVar9,param_1,*(undefined8 *)puVar6,0);
              puVar5 = PTR_DAT_04cb5848;
              if (lVar8 != 0) {
                Dino_BusSand_View_GameView__add_TapResolved_23a1b58(lVar8,uVar9,0);
                lVar8 = *(long *)(param_1 + 0x38);
                uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                System_Action_int____ctor_35ef18c(uVar9,param_1,*(undefined8 *)puVar5,0);
                puVar4 = PTR_DAT_04cb5850;
                if (lVar8 != 0) {
                  Dino_BusSand_View_GameView__add_HintShown_23a19f8(lVar8,uVar9,0);
                  lVar8 = *(long *)(param_1 + 0x38);
                  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                  System_Action___ctor_47b5ed0(uVar9,param_1,*(undefined8 *)puVar4,0);
                  if (lVar8 != 0) {
                    if ((bRam0000000004f9c907 & 1) == 0) {
                      FUN_02132f7c(PTR_DAT_04caa458,uVar9,0);
                      bRam0000000004f9c907 = 1;
                    }
                    puVar4 = PTR_DAT_04caa458;
                    lVar10 = *(long *)(lVar8 + 0x158);
                    while ((plVar12 = (long *)System_Delegate__Combine_4872324(lVar10,uVar9,0),
                           plVar12 == (long *)0x0 || (*plVar12 == *(long *)puVar4))) {
                      lVar11 = FUN_0216aff4(lVar8 + 0x158,plVar12,lVar10);
                      bVar7 = lVar11 == lVar10;
                      lVar10 = lVar11;
                      if (bVar7) {
                        return;
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_021335a4(plVar12);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

