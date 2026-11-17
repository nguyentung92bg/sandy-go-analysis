/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Tap
void Dino_BusSand_App_Meta_Journey_LevelJourney__Tap (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t truckId, int32_t outcome, int32_t waitReason, System_Int32_array* inbound, int32_t inboundCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Tap
   void Dino_BusSand_App_Meta_Journey_LevelJourney__Tap
   (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t
   truckId, int32_t outcome, int32_t waitReason, System_Int32_array* inbound, int32_t inboundCount,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_LevelJourney__Tap_2299c08
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5,
               uint param_6,long param_7,uint param_8)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  if ((bRam0000000004f9c213 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c213 = 1;
  }
  if ((3 < param_5) ||
     (uVar5 = Dino_BusSand_App_Meta_Journey_LevelJourney__Head_2299d68
                        (param_1,param_2,param_3,param_5,(long)param_4), puVar3 = PTR_DAT_04caa200,
     (uVar5 & 1) == 0)) {
    return;
  }
  if (param_5 == 2) {
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) {
LAB_02399d60:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    param_6 = param_6 & ((int)param_6 >> 0x1f ^ 0xffffffffU);
  }
  else {
    if (param_5 != 0) goto LAB_02399d44;
    if ((param_7 != 0) && (0 < (int)param_8)) {
      uVar5 = 0;
      do {
        if (*(uint *)(param_7 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar6 = *(long *)(param_1 + 0x10);
        uVar1 = *(undefined4 *)(param_7 + 0x20 + uVar5 * 4);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        iVar4 = System_Math__Max_4830fc8(0,uVar1,0);
        if (lVar6 == 0) goto LAB_02399d60;
        Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                  (lVar6,(ulong)(uVar5 < param_8 - 1) | (long)iVar4 << 1);
        uVar5 = uVar5 + 1;
      } while (param_8 != uVar5);
      goto LAB_02399d44;
    }
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) goto LAB_02399d60;
    param_6 = 0;
  }
  Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664(lVar6,param_6);
LAB_02399d44:
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x24) == '\0') {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      return;
    }
    Dino_BusSand_App_Meta_Journey_JourneyBytes__Rewind_2295424
              (lVar6,*(undefined4 *)(param_1 + 0x34));
    lVar6 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x49) = 1;
    uVar2 = *(uint *)(param_1 + 0x30) | 1;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x30) = uVar2;
    if (lVar6 != 0) {
      if (1 < *(int *)(lVar6 + 0x18)) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(uint *)(lVar6 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(char *)(lVar6 + 0x21) = (char)uVar2;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

