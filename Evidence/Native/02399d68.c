/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Head
bool Dino_BusSand_App_Meta_Journey_LevelJourney__Head (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t op, int64_t x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Head
   bool Dino_BusSand_App_Meta_Journey_LevelJourney__Head
   (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t op,
   int64_t x, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_Journey_LevelJourney__Head_2299d68
          (long param_1,long param_2,long param_3,uint param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam0000000004f9c215 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c215 = 1;
  }
  puVar1 = PTR_DAT_04caa200;
  if ((*(char *)(param_1 + 0x48) == '\0') || (*(char *)(param_1 + 0x49) != '\0')) {
    return 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar8 = *(long *)(param_1 + 0x18);
    lVar2 = *(long *)PTR_DAT_04caa200;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x38) = lVar8;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = System_Math__Max_4830fd4(0,param_2 - lVar8,0);
    lVar4 = System_Math__Max_4830fd4(0,param_3 - *(long *)(param_1 + 0x28),0);
    lVar2 = SUB168(SEXT816((long)(uVar3 * 0x32)) * SEXT816(0x5555555555555556),8);
    lVar2 = *(long *)(param_1 + 0x20) + (lVar2 - (lVar2 >> 0x3f));
    lVar5 = lVar4 - lVar2;
    lVar8 = -lVar5;
    if (-1 < lVar5) {
      lVar8 = lVar5;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                (*(long *)(param_1 + 0x10),uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU));
      lVar7 = *(long *)(param_1 + 0x10);
      lVar5 = System_Math__Max_4830fd4(0,param_5,0);
      if (lVar7 != 0) {
        Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                  (lVar7,(ulong)(99 < lVar8) << 3 | lVar5 << 4 | (ulong)(param_4 & 7));
        if (99 < lVar8) {
          lVar2 = *(long *)(param_1 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = System_Math__Max_4830fd4(0,((lVar4 - lVar2) + 0x19) / 0x32,0);
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_02399f48;
          Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                    (*(long *)(param_1 + 0x10),uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU));
          lVar2 = *(long *)(param_1 + 0x20) + uVar6 * 0x32;
        }
        *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + uVar3;
        *(long *)(param_1 + 0x20) = lVar2;
        return 1;
      }
    }
  }
LAB_02399f48:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

