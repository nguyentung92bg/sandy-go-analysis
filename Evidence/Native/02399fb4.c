/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Miss
void Dino_BusSand_App_Meta_Journey_LevelJourney__Miss (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t cell, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.LevelJourney$$Miss
   void Dino_BusSand_App_Meta_Journey_LevelJourney__Miss
   (Dino_BusSand_App_Meta_Journey_LevelJourney_o* __this, int64_t tick, int64_t nowMs, int32_t cell,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_LevelJourney__Miss_2299fb4
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  puVar2 = PTR_DAT_04caa200;
  if ((bRam0000000004f9c214 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c214 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = System_Math__Min_4831118(0x5f,param_4,0);
  iVar4 = System_Math__Max_4830fc8(0,uVar3,0);
  uVar6 = Dino_BusSand_App_Meta_Journey_LevelJourney__Head_2299d68
                    (param_1,param_2,param_3,4,(long)iVar4);
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + 0x24) == '\0') {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      return;
    }
    Dino_BusSand_App_Meta_Journey_JourneyBytes__Rewind_2295424
              (lVar5,*(undefined4 *)(param_1 + 0x34));
    lVar5 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x49) = 1;
    uVar1 = *(uint *)(param_1 + 0x30) | 1;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x30) = uVar1;
    if (lVar5 != 0) {
      if (1 < *(int *)(lVar5 + 0x18)) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(uint *)(lVar5 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        *(char *)(lVar5 + 0x21) = (char)uVar1;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

