/* IL2CPP: Dino.BusSand.App.UI.EventStakeUi$$Describe
void Dino_BusSand_App_UI_EventStakeUi__Describe (Dino_BusSand_App_Meta_IStakeActivity_o* a, System_String_o** icon, System_String_o** line, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventStakeUi$$Describe
   void Dino_BusSand_App_UI_EventStakeUi__Describe (Dino_BusSand_App_Meta_IStakeActivity_o* a,
   System_String_o** icon, System_String_o** line, const MethodInfo* method); */

void Dino_BusSand_App_UI_EventStakeUi__Describe_21bca44
               (long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar4 = PTR_DAT_04caf510;
  puVar3 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9bacb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caf900);
    FUN_02132f7c(PTR_DAT_04caf8d0);
    FUN_02132f7c(PTR_DAT_04caf908);
    FUN_02132f7c(PTR_DAT_04caf910);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04caf918);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04caf920);
    FUN_02132f7c(PTR_DAT_04caf928);
    FUN_02132f7c(PTR_DAT_04caf930);
    FUN_02132f7c(PTR_DAT_04caf510);
    FUN_02132f7c(PTR_DAT_04caf938);
    FUN_02132f7c(PTR_DAT_04caf940);
    FUN_02132f7c(PTR_DAT_04caf520);
    FUN_02132f7c(PTR_DAT_04caf948);
    FUN_02132f7c(PTR_DAT_04caf950);
    FUN_02132f7c(PTR_DAT_04caf958);
    FUN_02132f7c(PTR_DAT_04caf960);
    FUN_02132f7c(PTR_DAT_04caf528);
    FUN_02132f7c(PTR_DAT_04caf968);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    FUN_02132f7c(PTR_DAT_04caf538);
    bRam0000000004f9bacb = 1;
  }
  *param_2 = *(undefined8 *)puVar4;
  thunk_FUN_02134474(param_2);
  *param_3 = *(undefined8 *)puVar3;
  thunk_FUN_02134474(param_3);
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar8 = *param_1;
  bVar1 = *(byte *)(lVar8 + 0x130);
  bVar2 = *(byte *)(*(long *)PTR_DAT_04caf918 + 0x130);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04caf918)) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_04caf908 + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04caf908)) {
      if (lVar8 != *(long *)PTR_DAT_04caf8d0) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_04caf920 + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04caf920))
        {
          bVar2 = *(byte *)(*(long *)PTR_DAT_04caf900 + 0x130);
          if (bVar1 < bVar2) {
            return;
          }
          if (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_04caf900
             ) {
            return;
          }
          *param_2 = *(undefined8 *)PTR_DAT_04caf528;
          thunk_FUN_02134474(param_2);
          uVar5 = FUN_01e782f0(*(undefined8 *)PTR_DAT_04ca9d18);
          puVar9 = (undefined8 *)PTR_DAT_04caf930;
          puVar10 = (undefined8 *)PTR_DAT_04caf960;
          if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
            puVar9 = (undefined8 *)PTR_DAT_04caf930;
            puVar10 = (undefined8 *)PTR_DAT_04caf960;
          }
        }
        else {
          *param_2 = *(undefined8 *)PTR_DAT_04caf520;
          thunk_FUN_02134474(param_2);
          lVar11 = *(long *)PTR_DAT_04ca9d18;
          lVar8 = *(long *)(lVar11 + 0x38);
          if (lVar8 == 0) {
            FUN_0216b4cc(lVar11);
            lVar8 = *(long *)(lVar11 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_0216b470();
          }
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar8 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_0216b470();
          }
          uVar5 = **(undefined8 **)(lVar8 + 0xb8);
          puVar9 = (undefined8 *)PTR_DAT_04caf968;
          puVar10 = (undefined8 *)PTR_DAT_04caf928;
          if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad330);
            puVar9 = (undefined8 *)PTR_DAT_04caf968;
            puVar10 = (undefined8 *)PTR_DAT_04caf928;
          }
        }
        uVar5 = Dino_BusSand_App_UI_UiKit__T_2285e1c(*puVar9,*puVar10,uVar5,0);
        *param_3 = uVar5;
        if (iRam00000000051c1b10 != 0) {
          FUN_02220bf0(1L << ((ulong)param_3 >> 0xc & 0x3f),
                       ((ulong)param_3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
        }
        return;
      }
      *param_2 = *(undefined8 *)PTR_DAT_04caf950;
      thunk_FUN_02134474(param_2);
      plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
      lVar8 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
      puVar3 = PTR_DAT_04ca9ac8;
      if (lVar8 == 0) {
LAB_022bd108:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uStack_34 = *(undefined4 *)(lVar8 + 0x18);
      lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
      if (plVar6 == (long *)0x0) goto LAB_022bd108;
      if ((lVar8 != 0) &&
         (lVar11 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0)) {
LAB_022bd110:
        uVar5 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar5,0);
      }
      if ((int)plVar6[3] == 0) {
LAB_022bd10c:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar6[4] = lVar8;
      thunk_FUN_02134474(plVar6 + 4,lVar8);
      lVar8 = Dino_BusSand_App_Meta_WinStreak__get_S_22934d0(0);
      if (lVar8 == 0) goto LAB_022bd108;
      uStack_38 = Dino_BusSand_App_Meta_WinStreak__LastCheckpointFloor_22943dc
                            (*(undefined4 *)(lVar8 + 0x18),0);
      lVar8 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_38);
      if ((lVar8 != 0) &&
         (lVar11 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0))
      goto LAB_022bd110;
      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_022bd10c;
      plVar6[5] = lVar8;
      thunk_FUN_02134474(plVar6 + 5,lVar8);
      if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = *(undefined8 *)PTR_DAT_04caf938;
      uVar7 = *(undefined8 *)PTR_DAT_04caf940;
      goto LAB_022bd004;
    }
    *param_2 = *(undefined8 *)PTR_DAT_04caf538;
    thunk_FUN_02134474(param_2);
    plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,2);
    puVar4 = PTR_DAT_04caf910;
    lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)PTR_DAT_04caf910);
    puVar3 = PTR_DAT_04ca9ac8;
    if (lVar8 == 0) goto LAB_022bd108;
    uStack_34 = *(undefined4 *)(lVar8 + 0x10);
    lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
    if (plVar6 == (long *)0x0) goto LAB_022bd108;
    if ((lVar8 != 0) &&
       (lVar11 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0))
    goto LAB_022bd110;
    if ((int)plVar6[3] == 0) goto LAB_022bd10c;
    plVar6[4] = lVar8;
    thunk_FUN_02134474(plVar6 + 4,lVar8);
    lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                      (param_1,*(undefined8 *)puVar4);
    if (lVar8 == 0) goto LAB_022bd108;
    uStack_38 = Dino_BusSand_App_Meta_ClimbTowerFeature__PreArchivePoint_2229d84
                          (param_1,*(undefined4 *)(lVar8 + 0x10),1,0);
    lVar8 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&uStack_38);
    if ((lVar8 != 0) &&
       (lVar11 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0))
    goto LAB_022bd110;
    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_022bd10c;
    plVar6[5] = lVar8;
    thunk_FUN_02134474(plVar6 + 5,lVar8);
    puVar9 = (undefined8 *)PTR_DAT_04caf938;
    puVar10 = (undefined8 *)PTR_DAT_04caf940;
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar9 = (undefined8 *)PTR_DAT_04caf938;
      puVar10 = (undefined8 *)PTR_DAT_04caf940;
    }
  }
  else {
    *param_2 = *(undefined8 *)puVar4;
    thunk_FUN_02134474(param_2);
    plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    uStack_34 = Dino_BusSand_App_Meta_StreakRateFeature__CurRateNumber_224c938(param_1,0);
    lVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
    if (plVar6 == (long *)0x0) goto LAB_022bd108;
    if ((lVar8 != 0) &&
       (lVar11 = thunk_FUN_0216e7a0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0))
    goto LAB_022bd110;
    if ((int)plVar6[3] == 0) goto LAB_022bd10c;
    plVar6[4] = lVar8;
    thunk_FUN_02134474(plVar6 + 4,lVar8);
    puVar9 = (undefined8 *)PTR_DAT_04caf958;
    puVar10 = (undefined8 *)PTR_DAT_04caf948;
    if (*(int *)(*(long *)PTR_DAT_04cad330 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar9 = (undefined8 *)PTR_DAT_04caf958;
      puVar10 = (undefined8 *)PTR_DAT_04caf948;
    }
  }
  uVar5 = *puVar9;
  uVar7 = *puVar10;
LAB_022bd004:
  uVar5 = Dino_BusSand_App_UI_UiKit__T_2285e1c(uVar5,uVar7,plVar6,0);
  *param_3 = uVar5;
  thunk_FUN_02134474(param_3,uVar5);
  return;
}

