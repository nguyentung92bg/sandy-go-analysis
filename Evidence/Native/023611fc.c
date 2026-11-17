/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$Tick
void Dino_BusSand_App_Meta_RacingRobotSession__Tick (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$Tick
   void Dino_BusSand_App_Meta_RacingRobotSession__Tick (Dino_BusSand_App_Meta_RacingRobotSession_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSession__Tick_22611fc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f9c03d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4460);
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
  if (*(char *)(param_1 + 0x6d) != '\0') {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    lVar4 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
    ;
    puVar2 = PTR_DAT_04caa200;
    lVar6 = *(long *)(param_1 + 0x70);
    uVar9 = *(undefined4 *)(param_1 + 0x5c);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
    }
    fVar7 = (float)System_Math__Min_4831144((float)(lVar4 - lVar6) / 1000.0,uVar9,0);
    lVar6 = *(long *)(param_1 + 0x78);
    if (lVar6 < 1) {
      fVar8 = 0.0;
    }
    else {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar8 = (float)System_Math__Min_4831144((float)(lVar4 - lVar6) / 1000.0,0x43960000,0);
    }
    fVar10 = *(float *)(param_1 + 0x68);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar8 = (float)System_Math__Max_4830ff4(0,(fVar7 - fVar10) - fVar8,0);
    fVar10 = *(float *)(param_1 + 0x60);
    *(float *)(param_1 + 0x60) = fVar8;
    fVar10 = fVar8 - fVar10;
    if (fVar10 <= 0.0) {
LAB_023614b0:
      if (fVar7 < *(float *)(param_1 + 0x5c)) {
        return;
      }
      Dino_BusSand_App_Meta_RacingRobotSession__TriggerForceEnd_2262970(param_1);
      return;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,
                           *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
      puVar2 = PTR_DAT_04cb4488;
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 != 0) {
        uVar5 = 0;
        do {
          if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar5) {
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_58,lVar6,*(undefined8 *)PTR_DAT_04cb4478);
            puVar2 = PTR_DAT_04cb4468;
            while (uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                     (&uStack_58,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
              if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              Dino_BusSand_App_Meta_RacingRobotAgent__Advance_225f17c
                        (fVar10,fVar8,lStack_48,*(undefined4 *)(param_1 + 0x50),0);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_58,*(undefined8 *)PTR_DAT_04cb4460);
            Dino_BusSand_App_Meta_RacingRobotSession__RollbackStackedAgents_2261548(param_1,lVar4);
            Dino_BusSand_App_Meta_RacingRobotSession__HandleAntiStack_2261d48
                      (param_1,*(undefined4 *)(param_1 + 0x50));
            Dino_BusSand_App_Meta_RacingRobotSession__EnforceOneFinisher_2262438(param_1);
            if (*(char *)(param_1 + 0x6c) != '\0') {
              Dino_BusSand_App_Meta_RacingRobotSession__EnforcePayProtectInTick_22626ac(param_1);
            }
            Dino_BusSand_App_Meta_RacingRobotSession__SaveSnapshot_2260e0c(param_1);
            goto LAB_023614b0;
          }
          lVar3 = System_Collections_Generic_List_object___get_Item_3a81924
                            (lVar6,uVar5 & 0xffffffff,*(undefined8 *)puVar2);
          if ((lVar3 == 0) || (lVar4 == 0)) break;
          if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          lVar1 = uVar5 * 4;
          lVar6 = *(long *)(param_1 + 0x28);
          uVar5 = uVar5 + 1;
          *(undefined4 *)(lVar4 + lVar1 + 0x20) = *(undefined4 *)(lVar3 + 0x9c);
        } while (lVar6 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

