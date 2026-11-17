/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$AssignActivationPeriod
void Dino_BusSand_App_Meta_GiftPackFeature__AssignActivationPeriod (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c, Dino_BusSand_App_Meta_GiftPackState_o* s, int64_t now, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Type propagation algorithm not settling */
/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$AssignActivationPeriod
   void Dino_BusSand_App_Meta_GiftPackFeature__AssignActivationPeriod
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_GiftPackConfig_o* c,
   Dino_BusSand_App_Meta_GiftPackState_o* s, int64_t now, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__AssignActivationPeriod_2239ccc
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lStack_70;
  long alStack_68 [7];
  
  if ((bRam0000000004f9bebd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caec48);
    bRam0000000004f9bebd = 1;
  }
  alStack_68[5] = 0;
  alStack_68[6] = 0;
  alStack_68[3] = 0;
  alStack_68[4] = 0;
  alStack_68[1] = 0;
  alStack_68[2] = 0;
  lStack_70 = 0;
  alStack_68[0] = 0;
  uVar2 = Dino_BusSand_App_Meta_GiftPackFeature__IsBreakIcePack_22359fc(param_1,param_2);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = Dino_BusSand_App_Meta_GiftPackCycle__TryGetCycleRange_2232180
                        (param_2,param_4,alStack_68 + 6,alStack_68 + 5), lVar3 = alStack_68[6],
     puVar1 = PTR_DAT_04caec48, (uVar2 & 1) == 0)) {
    if ((param_2 == 0) ||
       ((uVar2 = Dino_BusSand_App_Meta_GiftPackCycle__IsFixedCyclePack_223208c(param_2),
        (uVar2 & 1) == 0 ||
        (uVar2 = Dino_BusSand_App_Meta_GiftPackCycle__TryGetCycleRange_2232180
                           (param_2,param_4,alStack_68 + 4,alStack_68 + 3), lVar3 = alStack_68[3],
        (uVar2 & 1) == 0)))) {
      if (param_3 == 0) goto LAB_02339ed4;
      *(long *)(param_3 + 0x58) = param_4;
      lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__DurationBeforeActivation_223a0ac(uVar2,param_2)
      ;
      *(long *)(param_3 + 0x60) = lVar3 + param_4;
      goto code_r0x02132f28;
    }
    if ((((0 < alStack_68[3]) && (alStack_68[3] < param_4)) &&
        (uVar2 = Dino_BusSand_App_Meta_GiftPackCycle__TryGetNextPeriodRange_2232608
                           (param_2,alStack_68[4],alStack_68,&lStack_70), (uVar2 & 1) != 0)) &&
       ((0 < alStack_68[0] && (0 < lStack_70)))) {
      alStack_68[3] = lStack_70;
      alStack_68[4] = alStack_68[0];
      lVar3 = lStack_70;
    }
    if (param_3 == 0) goto LAB_02339ed4;
    lVar5 = alStack_68[4];
    if (alStack_68[4] < 1) {
      lVar5 = param_4;
    }
    if (lVar3 < 1) {
      lVar3 = param_4;
    }
  }
  else {
    if ((param_4 < alStack_68[6]) || (alStack_68[5] < param_4)) {
      if (param_3 != 0) {
        *(long *)(param_3 + 0x58) = param_4;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = Dino_BusSand_App_Meta_GiftPackFeature__BreakIceOutsideCycleConsumedPeriodKey_223a02c
                          (param_2,param_4);
        *(undefined8 *)(param_3 + 0x80) = uVar4;
        thunk_FUN_02134474();
        uVar2 = Dino_BusSand_App_Meta_GiftPackCycle__TryGetNextPeriodRange_2232608
                          (param_2,lVar3,alStack_68 + 1,alStack_68 + 2);
        if (((uVar2 & 1) == 0) || (alStack_68[2] <= param_4)) {
          alStack_68[2] =
               Dino_BusSand_App_Meta_GiftPackFeature__DurationBeforeActivation_223a0ac
                         (uVar2,param_2);
          alStack_68[2] = alStack_68[2] + param_4;
        }
        *(long *)(param_3 + 0x60) = alStack_68[2];
        return;
      }
LAB_02339ed4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (param_3 == 0) goto LAB_02339ed4;
    lVar5 = alStack_68[6];
    if (alStack_68[6] < 1) {
      lVar5 = param_4;
    }
    lVar3 = alStack_68[5];
    if (alStack_68[5] < 1) {
      lVar3 = param_4;
    }
  }
  *(long *)(param_3 + 0x58) = lVar5;
  *(long *)(param_3 + 0x60) = lVar3;
  param_4 = lVar5;
code_r0x02132f28:
  uVar4 = Dino_BusSand_App_Meta_GiftPackCycle__GetCurrentPeriodKey_22322cc(param_2,param_4);
  puVar6 = (undefined8 *)(param_3 + 0x80);
  *puVar6 = uVar4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar6 >> 0xc & 0x3f),
                 ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

