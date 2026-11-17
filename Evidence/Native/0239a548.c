/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Named
bool Dino_BusSand_App_Meta_Journey_UiJourney__Named (Dino_BusSand_App_Meta_Journey_UiJourney_o* __this, int64_t nowMs, int32_t op, System_String_o* a, System_String_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Named
   bool Dino_BusSand_App_Meta_Journey_UiJourney__Named (Dino_BusSand_App_Meta_Journey_UiJourney_o*
   __this, int64_t nowMs, int32_t op, System_String_o* a, System_String_o* b, const MethodInfo*
   method); */

bool Dino_BusSand_App_Meta_Journey_UiJourney__Named_229a548
               (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  if ((*(char *)(param_1 + 0x38) != '\0') && (*(int *)(param_1 + 0x3c) < 200)) {
    uVar6 = System_String__IsNullOrEmpty_46d2084(param_4,0);
    if ((uVar6 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
LAB_0239a648:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      Dino_BusSand_App_Meta_Journey_UiJourney__Time_229a7e0(param_1,param_2);
      iVar5 = Dino_BusSand_App_Meta_Journey_UiJourney__Find_229a9d8(param_1,param_4,param_5);
      lVar7 = *(long *)(param_1 + 0x10);
      if (iVar5 < 0) {
        if (lVar7 == 0) goto LAB_0239a648;
        Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664(lVar7,param_3 & 0xffffffff);
        Dino_BusSand_App_Meta_Journey_UiJourney__Literal_229aa90(param_1,param_4,param_5);
        iVar5 = 0;
      }
      else {
        if (lVar7 == 0) goto LAB_0239a648;
        Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                  (lVar7,param_3 & 0xffffffff | (long)(iVar5 + 1) << 3);
        iVar5 = -1;
      }
      lVar7 = *(long *)(param_1 + 0x10);
      auVar4._8_4_ = uVar1;
      auVar4._0_8_ = lVar7;
      auVar4._12_4_ = 0;
      auVar10._8_4_ = uVar1;
      auVar10._0_8_ = lVar7;
      auVar10._12_4_ = 0;
      if (lVar7 == 0) goto LAB_0239a9d0;
      cVar2 = *(char *)(lVar7 + 0x24);
      if (cVar2 == '\0') {
        if (iVar5 == 0) {
          uVar3 = *(uint *)(param_1 + 0x28);
          if ((int)uVar3 < 0x60) {
            lVar7 = *(long *)(param_1 + 0x18);
            auVar10 = auVar4;
            if (lVar7 == 0) {
LAB_0239a9d0:
                    /* WARNING: Subroutine does not return */
              FUN_02133224(auVar10._0_8_,auVar10._8_8_);
            }
            if (*(uint *)(lVar7 + 0x18) <= uVar3) {
LAB_0239a9d4:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            puVar8 = (undefined8 *)(lVar7 + (long)(int)uVar3 * 8 + 0x20);
            *puVar8 = param_4;
            auVar10 = thunk_FUN_02134474(puVar8,param_4);
            lVar7 = *(long *)(param_1 + 0x20);
            if (lVar7 == 0) goto LAB_0239a9d0;
            if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x28)) goto LAB_0239a9d4;
            puVar8 = (undefined8 *)(lVar7 + (long)(int)*(uint *)(param_1 + 0x28) * 8 + 0x20);
            *puVar8 = param_5;
            thunk_FUN_02134474(puVar8,param_5);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
          }
        }
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      }
      else {
        Dino_BusSand_App_Meta_Journey_JourneyBytes__Rewind_2295424();
        *(undefined8 *)(param_1 + 0x30) = uVar9;
      }
      return cVar2 == '\0';
    }
  }
  return false;
}

