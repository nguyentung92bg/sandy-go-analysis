/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$SetAgentProgress
void Dino_BusSand_App_Meta_RacingRobotSession__SetAgentProgress (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, int32_t configId, int32_t progress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$SetAgentProgress
   void Dino_BusSand_App_Meta_RacingRobotSession__SetAgentProgress
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, int32_t configId, int32_t progress, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSession__SetAgentProgress_2263a74
               (long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000004f9c042 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4460);
    FUN_02132f7c(PTR_DAT_04cb4468);
    FUN_02132f7c(PTR_DAT_04cb4470);
    FUN_02132f7c(PTR_DAT_04cb4478);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c042 = 1;
  }
  puVar3 = PTR_DAT_04cb4468;
  puVar2 = PTR_DAT_04cb4460;
  uStack_60 = 0;
  uStack_58 = 0;
  lStack_50 = 0;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x6d) == '\0') {
      iVar1 = *(int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = param_3;
      Dino_BusSand_App_Meta_RacingRobotSession__Tick_22611fc();
      if (iVar1 < param_3) {
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
        Dino_BusSand_App_Meta_RacingRobotSession__HandleAntiStack_2261d48(param_1,param_3);
      }
      else if (param_3 == 0) {
        *(undefined4 *)(param_1 + 100) = 0;
      }
      if (*(char *)(param_1 + 0x6c) != '\0') {
        Dino_BusSand_App_Meta_RacingRobotSession__HandlePayProtectProgressUpdate_2262ba4
                  (param_1,param_3);
      }
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(int *)(*(long *)(param_1 + 0x18) + 0x18) <= param_3) {
        if (*(char *)(param_1 + 0x6d) == '\0') {
          *(undefined1 *)(param_1 + 0x6d) = 1;
          if (*(long *)(param_1 + 0x30) != 0) {
            Dino_BusSand_App_Meta_RacingRobotSave__ClearAgentSnapshot_225fbb0();
          }
          lVar6 = *(long *)(param_1 + 0x88);
          if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023630d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),1,*(undefined8 *)(lVar6 + 0x28));
            return;
          }
        }
        return;
      }
    }
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_78,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cb4478);
  lStack_50 = lStack_68;
  uStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
  do {
    uVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                      (&uStack_60,*(undefined8 *)puVar3);
    lVar6 = lStack_50;
    if ((uVar5 & 1) == 0) goto LAB_02363bbc;
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(long *)(lStack_50 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  } while (*(int *)(*(long *)(lStack_50 + 0x10) + 0x10) != param_2);
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18);
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = System_Math__Min_4831118(uVar4,param_3,0);
  uVar4 = System_Math__Max_4830fc8(0,uVar4,0);
  Dino_BusSand_App_Meta_RacingRobotAgent__SetProgress_225f5c0(lVar6,uVar4,0);
  Dino_BusSand_App_Meta_RacingRobotSession__SaveSnapshot_2260e0c(param_1);
LAB_02363bbc:
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_60,*(undefined8 *)puVar2);
  return;
}

