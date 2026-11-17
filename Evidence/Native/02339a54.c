/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$ActivatePack
void Dino_BusSand_App_Meta_GiftPackFeature__ActivatePack (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, int32_t group, bool queuePopup, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$ActivatePack
   void Dino_BusSand_App_Meta_GiftPackFeature__ActivatePack
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, int32_t packId, int32_t group, bool queuePopup,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__ActivatePack_2239a54
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04caec48;
  if ((bRam0000000004f9bebc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caefe8);
    FUN_02132f7c(PTR_DAT_04cb3390);
    FUN_02132f7c(PTR_DAT_04caef48);
    FUN_02132f7c(PTR_DAT_04cb35b0);
    FUN_02132f7c(PTR_DAT_04cb35b8);
    bRam0000000004f9bebc = 1;
  }
  lVar5 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,param_2);
  lVar6 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,param_2);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  lVar7 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x78) = param_3;
    *(undefined2 *)(lVar6 + 0x6c) = 0;
    *(undefined4 *)(lVar6 + 0x68) = 0;
    *(undefined1 *)(lVar6 + 0x30) = 1;
    puVar1 = (undefined8 *)PTR_DAT_04cb35b8;
    *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
    puVar3 = PTR_DAT_04cb35b0;
    *(undefined8 *)(lVar6 + 0x50) = 0;
    lVar7 = lVar7 / 1000;
    *(long *)(lVar6 + 0x20) = lVar7;
    Dino_BusSand_App_Meta_GiftPackFeature__AssignActivationPeriod_2239ccc(param_1,lVar5,lVar6,lVar7)
    ;
    if (*(int *)(lVar6 + 0x14) != 1) {
      puVar1 = (undefined8 *)puVar3;
    }
    *(undefined8 *)(lVar6 + 0x90) = *puVar1;
    thunk_FUN_02134474();
    Dino_BusSand_App_Meta_GiftPackFeature__UpdateThemeIndex_2235868(param_1,lVar5,lVar6);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x54) != 3) {
LAB_02339c0c:
        puVar3 = PTR_DAT_04caef48;
        Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                  (param_1,*(undefined8 *)PTR_DAT_04caefe8);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar6 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
        if (lVar6 != 0) {
          Dino_BusSand_App_Meta_PassportFeature__OnGiftPackTriggered_224970c(lVar6,param_2,0);
        }
        if (((param_4 & 1) != 0) && (*(int *)(lVar5 + 0x58) == 2)) {
          Dino_BusSand_App_Meta_GiftPackFeature__QueuePopup_2239ed8(param_1,param_2);
        }
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
        if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02339cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
          return;
        }
        return;
      }
      lVar8 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                        (param_1,*(undefined8 *)PTR_DAT_04cb3390);
      if (lVar8 != 0) {
        lVar8 = *(long *)(lVar8 + 0x70);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = Dino_BusSand_App_Meta_GiftPackFeature__get_CurLevel_22352c4();
        if (lVar8 != 0) {
          Dino_BusSand_App_Meta_GoldenGiftState__ResetForNewRound_223380c
                    (lVar8,uVar4,lVar7,*(long *)(lVar6 + 0x60) - lVar7);
          goto LAB_02339c0c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

