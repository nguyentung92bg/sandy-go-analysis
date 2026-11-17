/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$ExpirePack
void Dino_BusSand_App_Meta_GiftPackFeature__ExpirePack (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$ExpirePack
   void Dino_BusSand_App_Meta_GiftPackFeature__ExpirePack (Dino_BusSand_App_Meta_GiftPackFeature_o*
   __this, int32_t packId, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__ExpirePack_223a404(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  if ((bRam0000000004f9bec3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04cad868);
    FUN_02132f7c(PTR_DAT_04caefe8);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bec3 = 1;
  }
  lVar5 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,param_2);
  puVar1 = PTR_DAT_04caec48;
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + 0x30) != '\0') {
      lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,param_2);
      lVar7 = *(long *)puVar1;
      *(undefined1 *)(lVar5 + 0x30) = 0;
      *(undefined1 *)(lVar5 + 0x6d) = 0;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
      uVar3 = Dino_BusSand_App_Meta_GiftPackCycle__DayKey_2233654(lVar7 / 1000);
      *(undefined4 *)(lVar5 + 0x48) = uVar3;
      if ((lVar6 != 0) &&
         (uVar8 = Dino_BusSand_App_Meta_GiftPackCycle__IsFixedCyclePack_223208c(lVar6),
         (uVar8 & 1) == 0)) {
        uVar9 = *(undefined8 *)(lVar5 + 0x28);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
        uVar3 = *(undefined4 *)(lVar6 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar4 = System_Math__Max_4830fc8(0,uVar3,0);
        uVar9 = System_Math__Max_4830fd4(uVar9,lVar7 / 1000 + (long)iVar4 * 0x3c,0);
        *(undefined8 *)(lVar5 + 0x28) = uVar9;
      }
      puVar2 = PTR_DAT_04caefe8;
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0233a60c;
      System_Collections_Generic_List_int___Remove_3a2d540
                (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)PTR_DAT_04cad868);
      Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc(param_1,*(undefined8 *)puVar2);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),param_2,*(undefined8 *)(lVar5 + 0x28));
      }
      Dino_BusSand_App_Meta_GiftPackFeature__TryActivateFromPendingQueue_2236a88(param_1);
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0233a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        return;
      }
    }
    return;
  }
LAB_0233a60c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

