/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$TrackUnlockStage
void Dino_BusSand_App_Meta_PassportFeature__TrackUnlockStage (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t stage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$TrackUnlockStage
   void Dino_BusSand_App_Meta_PassportFeature__TrackUnlockStage
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, int32_t stage, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__TrackUnlockStage_2247500
               (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar1 = PTR_DAT_04ca9c20;
  if ((bRam0000000004f9bf94 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cb2e48);
    FUN_02132f7c(PTR_DAT_04cb3a00);
    FUN_02132f7c(PTR_DAT_04cb3a08);
    FUN_02132f7c(PTR_DAT_04cb2b30);
    FUN_02132f7c(PTR_DAT_04cb2bd8);
    bRam0000000004f9bf94 = 1;
  }
  plVar4 = (long *)FUN_02133068(*(undefined8 *)puVar1,8);
  puVar1 = PTR_DAT_04cb2b30;
  if (plVar4 == (long *)0x0) {
LAB_02347858:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((*(long *)PTR_DAT_04cb2b30 != 0) &&
     (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb2b30,*(undefined8 *)(*plVar4 + 0x40)),
     lVar5 == 0)) goto LAB_0234784c;
  puVar2 = PTR_DAT_04cb01b0;
  if ((int)plVar4[3] == 0) goto LAB_02347848;
  plVar4[4] = *(long *)puVar1;
  thunk_FUN_02134474();
  lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258(param_1,*(undefined8 *)puVar2)
  ;
  puVar1 = PTR_DAT_04ca9ac8;
  if (lVar5 == 0) goto LAB_02347858;
  uStack_44 = *(undefined4 *)(lVar5 + 0x74);
  lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_44);
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_0234784c:
    uVar7 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar7,0);
  }
  puVar3 = PTR_DAT_04cb2e48;
  if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
    plVar4[5] = lVar5;
    thunk_FUN_02134474(plVar4 + 5,lVar5);
    lVar5 = *(long *)puVar3;
    if ((lVar5 != 0) &&
       (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_0234784c;
    if (2 < *(uint *)(plVar4 + 3)) {
      plVar4[6] = *(long *)puVar3;
      thunk_FUN_02134474();
      uStack_48 = param_2;
      lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_48);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
      goto LAB_0234784c;
      puVar3 = PTR_DAT_04cb2bd8;
      if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
        plVar4[7] = lVar5;
        thunk_FUN_02134474(plVar4 + 7,lVar5);
        lVar5 = *(long *)puVar3;
        if ((lVar5 != 0) &&
           (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_0234784c;
        if (4 < *(uint *)(plVar4 + 3)) {
          plVar4[8] = *(long *)puVar3;
          thunk_FUN_02134474();
          uStack_50 = Dino_BusSand_App_Meta_PassportFeature__RemainingSeconds_2246184(param_1);
          lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x68),&uStack_50);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
          goto LAB_0234784c;
          puVar3 = PTR_DAT_04cb3a00;
          if (5 < *(uint *)(plVar4 + 3)) {
            plVar4[9] = lVar5;
            thunk_FUN_02134474(plVar4 + 9,lVar5);
            lVar5 = *(long *)puVar3;
            if ((lVar5 != 0) &&
               (lVar5 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
            goto LAB_0234784c;
            if (6 < *(uint *)(plVar4 + 3)) {
              plVar4[10] = *(long *)puVar3;
              thunk_FUN_02134474();
              lVar5 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                                (param_1,*(undefined8 *)puVar2);
              if (lVar5 == 0) goto LAB_02347858;
              uVar7 = *(undefined8 *)PTR_DAT_04cb3a08;
              uStack_50 = CONCAT44(uStack_50._4_4_,(uint)*(byte *)(lVar5 + 0x61));
              lVar5 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_50);
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
              goto LAB_0234784c;
              puVar1 = PTR_DAT_04cac5c0;
              if ((*(uint *)(plVar4 + 3) & 0xfffffff8) != 0) {
                plVar4[0xb] = lVar5;
                thunk_FUN_02134474(plVar4 + 0xb,lVar5);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_Analytics__Log_216d0c8(uVar7,plVar4,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_02347848:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

