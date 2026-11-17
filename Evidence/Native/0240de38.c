/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$UseItem
void Dino_BusSand_App_UI_HudPanel__UseItem (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t id, bool free, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$UseItem
   void Dino_BusSand_App_UI_HudPanel__UseItem (Dino_BusSand_App_UI_HudPanel_o* __this, int32_t id,
   bool free, const MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__UseItem_230de38(long param_1,int param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  byte abStack_58 [4];
  int iStack_54;
  long lStack_48;
  
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9c52d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cb6a88);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cac518);
    FUN_02132f7c(PTR_DAT_04cac768);
    FUN_02132f7c(PTR_DAT_04cb81e0);
    FUN_02132f7c(PTR_DAT_04cb81e8);
    FUN_02132f7c(PTR_DAT_04cb81f0);
    FUN_02132f7c(PTR_DAT_04cb27d0);
    bRam0000000004f9c52d = 1;
  }
  lStack_48 = 0;
  plVar4 = (long *)FUN_02133068(*(undefined8 *)puVar1,4);
  puVar1 = PTR_DAT_04cac768;
  if (plVar4 == (long *)0x0) goto LAB_0240e440;
  if ((*(long *)PTR_DAT_04cac768 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cac768,*(undefined8 *)(*plVar4 + 0x40)),
     lVar5 == 0)) {
LAB_0240e444:
    uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = *(long *)puVar1;
    thunk_FUN_02134474();
    puVar1 = PTR_DAT_04ca9ac8;
    iStack_54 = param_2;
    lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_54);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
    goto LAB_0240e444;
    puVar2 = PTR_DAT_04cb27d0;
    if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
      plVar4[5] = lVar5;
      thunk_FUN_02134474(plVar4 + 5,lVar5);
      lVar5 = *(long *)puVar2;
      if ((lVar5 != 0) &&
         (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_0240e444;
      if (2 < *(uint *)(plVar4 + 3)) {
        plVar4[6] = *(long *)puVar2;
        thunk_FUN_02134474();
        abStack_58[0] = param_3 & 1;
        lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x28),abStack_58);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_0240e444;
        puVar2 = PTR_DAT_04cb81f0;
        puVar1 = PTR_DAT_04cac5c0;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
          plVar4[7] = lVar5;
          thunk_FUN_02134474(plVar4 + 7,lVar5);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar7 = Dino_BusSand_App_Analytics__L_216fff0(plVar4,0);
          Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar2,uVar7,0);
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_0240e440;
          iVar3 = Dino_BusSand_App_Gameplay_GameplayController__UseItem_229ebbc
                            (*(long *)(param_1 + 0x40),param_2,&lStack_48,param_3 & 1,0);
          if (iVar3 == 2) {
            uVar7 = Dino_BusSand_App_UI_HudPanel__ItemRect_230e450(param_1,param_2);
            Dino_BusSand_App_UI_FailPanel__NopeButton_2317cf8(uVar7,0);
            puVar1 = PTR_DAT_04caba50;
            if (lStack_48 != 0) {
              if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b88f == '\0') {
                FUN_02132f7c(PTR_DAT_04caba50);
                cRam0000000004f9b88f = '\x01';
              }
              lVar5 = *(long *)puVar1;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar5 = *(long *)puVar1;
              }
              lVar5 = **(long **)(lVar5 + 0xb8);
              uVar7 = Dino_BusSand_App_UI_HudPanel__ItemFailText_230e598(param_1,lStack_48);
              if (lVar5 == 0) goto LAB_0240e440;
              Dino_BusSand_App_GameApp__Toast_2166a6c(lVar5,uVar7,0);
            }
          }
          else {
            *(int *)(param_1 + 0x48) = param_2;
            *(byte *)(param_1 + 0x4c) = param_3 & 1;
            if (iVar3 == 0) {
              Dino_BusSand_App_UI_HudPanel__Consume_230e91c(param_1,param_2);
              *(undefined4 *)(param_1 + 0x48) = 0;
              uVar7 = Dino_BusSand_App_UI_HudPanel__ItemRect_230e450(param_1,param_2);
              if (*(int *)(*(long *)PTR_DAT_04cb6a88 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb6a88);
              }
              Dino_BusSand_App_UI_HudPanel__PlayBump_230ecd4(uVar7);
              Dino_BusSand_App_UI_HudPanel__RefreshItems_230991c(param_1);
              lVar5 = *(long *)(param_1 + 0x128);
              if (lVar5 != 0) {
                (**(code **)(lVar5 + 0x18))
                          (*(undefined8 *)(lVar5 + 0x40),param_2,*(undefined8 *)(lVar5 + 0x28));
              }
            }
            else {
              Dino_BusSand_App_UI_HudPanel__ShowItemMask_230a1b4(param_1,1);
              puVar1 = PTR_DAT_04caba50;
              if (param_2 == 0x2713) {
                if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                if (cRam0000000004f9b88f == '\0') {
                  FUN_02132f7c(PTR_DAT_04caba50);
                  cRam0000000004f9b88f = '\x01';
                }
                lVar5 = *(long *)puVar1;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar5 = *(long *)puVar1;
                }
                lVar9 = *(long *)PTR_DAT_04ca9d18;
                lVar6 = **(long **)(lVar5 + 0xb8);
                lVar5 = *(long *)(lVar9 + 0x38);
                if (lVar5 == 0) {
                  FUN_0216b4cc(lVar9);
                  lVar5 = *(long *)(lVar9 + 0x38);
                }
                lVar5 = *(long *)(lVar5 + 0x10);
                if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_0216b470();
                }
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                lVar5 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_0216b470();
                }
                uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
                }
                uVar7 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)PTR_DAT_04cb81e0,uVar7,0);
                if (lVar6 == 0) {
LAB_0240e440:
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                Dino_BusSand_App_GameApp__Toast_2166a6c(lVar6,uVar7,0);
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                if (cRam0000000004f9b88f == '\0') {
                  FUN_02132f7c(PTR_DAT_04caba50);
                  cRam0000000004f9b88f = '\x01';
                }
                lVar5 = *(long *)puVar1;
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                  lVar5 = *(long *)puVar1;
                }
                if ((**(long **)(lVar5 + 0xb8) == 0) ||
                   (lVar5 = *(long *)(**(long **)(lVar5 + 0xb8) + 0x28), lVar5 == 0))
                goto LAB_0240e440;
                uVar8 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                                  (lVar5,*(undefined8 *)PTR_DAT_04cac518);
                if ((uVar8 & 1) == 0) {
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  if (cRam0000000004f9b88f == '\0') {
                    FUN_02132f7c(PTR_DAT_04caba50);
                    cRam0000000004f9b88f = '\x01';
                  }
                  lVar5 = *(long *)puVar1;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar5 = *(long *)puVar1;
                  }
                  lVar9 = *(long *)PTR_DAT_04ca9d18;
                  lVar6 = **(long **)(lVar5 + 0xb8);
                  lVar5 = *(long *)(lVar9 + 0x38);
                  if (lVar5 == 0) {
                    FUN_0216b4cc(lVar9);
                    lVar5 = *(long *)(lVar9 + 0x38);
                  }
                  lVar5 = *(long *)(lVar5 + 0x10);
                  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    lVar5 = FUN_0216b470();
                  }
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  lVar5 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    lVar5 = FUN_0216b470();
                  }
                  uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                  if (*(int *)(*(long *)PTR_DAT_04cab550 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)PTR_DAT_04cab550);
                  }
                  uVar7 = Dino_BusSand_App_Lang__Get_215f9c0
                                    (*(undefined8 *)PTR_DAT_04cb81e8,uVar7,0);
                  Dino_BusSand_App_UI_HudPanel__PictureHeight_230eddc(param_1);
                  if (lVar6 == 0) goto LAB_0240e440;
                  Dino_BusSand_App_GameApp__Toast_2169dc0(lVar6,uVar7,0);
                }
              }
              Dino_BusSand_App_UI_HudPanel__RefreshItems_230991c(param_1);
            }
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

