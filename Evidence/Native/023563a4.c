/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$TickSession
void Dino_BusSand_App_Meta_YachtRacingCore__TickSession (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$TickSession
   void Dino_BusSand_App_Meta_YachtRacingCore__TickSession (Dino_BusSand_App_Meta_YachtRacingCore_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__TickSession_22563a4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 == 0) {
    return;
  }
  if ((bRam0000000004f9c03d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4460,0);
    FUN_02132f7c(PTR_DAT_04cb4468);
    FUN_02132f7c(PTR_DAT_04cb4470);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cb4478);
    FUN_02132f7c(PTR_DAT_04cb4458);
    FUN_02132f7c(PTR_DAT_04cb4488);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c03d = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_48 = 0;
  if (*(char *)(lVar3 + 0x6d) != '\0') {
    return;
  }
  lVar5 = *(long *)(lVar3 + 0x40);
  if (lVar5 != 0) {
    lVar5 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28))
    ;
    puVar2 = PTR_DAT_04caa200;
    lVar7 = *(long *)(lVar3 + 0x70);
    uVar10 = *(undefined4 *)(lVar3 + 0x5c);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
    }
    fVar8 = (float)System_Math__Min_4831144((float)(lVar5 - lVar7) / 1000.0,uVar10,0);
    lVar7 = *(long *)(lVar3 + 0x78);
    if (lVar7 < 1) {
      fVar9 = 0.0;
    }
    else {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar9 = (float)System_Math__Min_4831144((float)(lVar5 - lVar7) / 1000.0,0x43960000,0);
    }
    fVar11 = *(float *)(lVar3 + 0x68);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar9 = (float)System_Math__Max_4830ff4(0,(fVar8 - fVar11) - fVar9,0);
    fVar11 = *(float *)(lVar3 + 0x60);
    *(float *)(lVar3 + 0x60) = fVar9;
    fVar11 = fVar9 - fVar11;
    if (fVar11 <= 0.0) {
LAB_023614b0:
      if (fVar8 < *(float *)(lVar3 + 0x5c)) {
        return;
      }
      Dino_BusSand_App_Meta_RacingRobotSession__TriggerForceEnd_2262970(lVar3);
      return;
    }
    if (*(long *)(lVar3 + 0x28) != 0) {
      lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,
                           *(undefined4 *)(*(long *)(lVar3 + 0x28) + 0x18));
      puVar2 = PTR_DAT_04cb4488;
      lVar7 = *(long *)(lVar3 + 0x28);
      if (lVar7 != 0) {
        uVar6 = 0;
        do {
          if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar6) {
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_58,lVar7,*(undefined8 *)PTR_DAT_04cb4478);
            puVar2 = PTR_DAT_04cb4468;
            while (uVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                     (&uStack_58,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
              if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              Dino_BusSand_App_Meta_RacingRobotAgent__Advance_225f17c
                        (fVar11,fVar9,lStack_48,*(undefined4 *)(lVar3 + 0x50),0);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_58,*(undefined8 *)PTR_DAT_04cb4460);
            Dino_BusSand_App_Meta_RacingRobotSession__RollbackStackedAgents_2261548(lVar3,lVar5);
            Dino_BusSand_App_Meta_RacingRobotSession__HandleAntiStack_2261d48
                      (lVar3,*(undefined4 *)(lVar3 + 0x50));
            Dino_BusSand_App_Meta_RacingRobotSession__EnforceOneFinisher_2262438(lVar3);
            if (*(char *)(lVar3 + 0x6c) != '\0') {
              Dino_BusSand_App_Meta_RacingRobotSession__EnforcePayProtectInTick_22626ac(lVar3);
            }
            Dino_BusSand_App_Meta_RacingRobotSession__SaveSnapshot_2260e0c(lVar3);
            goto LAB_023614b0;
          }
          lVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                            (lVar7,uVar6 & 0xffffffff,*(undefined8 *)puVar2);
          if ((lVar4 == 0) || (lVar5 == 0)) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          lVar1 = uVar6 * 4;
          lVar7 = *(long *)(lVar3 + 0x28);
          uVar6 = uVar6 + 1;
          *(undefined4 *)(lVar5 + lVar1 + 0x20) = *(undefined4 *)(lVar4 + 0x9c);
        } while (lVar7 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

