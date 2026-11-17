/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Mark
bool Dino_BusSand_App_Meta_Journey_UiJourney__Mark (Dino_BusSand_App_Meta_Journey_UiJourney_o* __this, int64_t nowMs, int32_t kind, int64_t a, int64_t b, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Mark
   bool Dino_BusSand_App_Meta_Journey_UiJourney__Mark (Dino_BusSand_App_Meta_Journey_UiJourney_o*
   __this, int64_t nowMs, int32_t kind, int64_t a, int64_t b, System_String_o* name, const
   MethodInfo* method); */

bool Dino_BusSand_App_Meta_Journey_UiJourney__Mark_229a67c
               (long param_1,undefined8 param_2,int param_3,ulong param_4,ulong param_5,long param_6
               )

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000004f9c217 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c217 = 1;
  }
  if ((*(char *)(param_1 + 0x38) == '\0') || (199 < *(int *)(param_1 + 0x3c))) {
    return false;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_0239a7dc:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  Dino_BusSand_App_Meta_Journey_UiJourney__Time_229a7e0(param_1,param_2);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_0239a7dc;
  Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
            (*(long *)(param_1 + 0x10),(long)param_3 << 3 | 4);
  if (param_3 - 4U < 3) {
    lVar9 = *(long *)PTR_DAT_04ca9c30;
    if (param_6 != 0) {
      lVar9 = param_6;
    }
    iVar5 = Dino_BusSand_App_Meta_Journey_UiJourney__NameArg_229a8a4(param_1,lVar9,0);
  }
  else {
    if (param_3 == 1) {
      lVar9 = *(long *)(param_1 + 0x10);
      if (lVar9 == 0) goto LAB_0239a7dc;
      param_5 = param_4 & ((long)param_4 >> 0x3f ^ 0xffffffffffffffffU);
LAB_0239a798:
      Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664(lVar9,param_5);
    }
    else if (param_3 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0239a7dc;
      Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                (*(long *)(param_1 + 0x10),param_4 & ((long)param_4 >> 0x3f ^ 0xffffffffffffffffU));
      lVar9 = *(long *)(param_1 + 0x10);
      if (lVar9 == 0) goto LAB_0239a7dc;
      param_5 = param_5 & ((long)param_5 >> 0x3f ^ 0xffffffffffffffffU);
      goto LAB_0239a798;
    }
    iVar5 = -1;
  }
  lVar9 = *(long *)PTR_DAT_04ca9c30;
  if (param_6 != 0) {
    lVar9 = param_6;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  auVar4._8_4_ = uVar1;
  auVar4._0_8_ = lVar6;
  auVar4._12_4_ = 0;
  auVar11._8_4_ = uVar1;
  auVar11._0_8_ = lVar6;
  auVar11._12_4_ = 0;
  if (lVar6 == 0) goto LAB_0239a9d0;
  cVar2 = *(char *)(lVar6 + 0x24);
  if (cVar2 == '\0') {
    if (iVar5 == 0) {
      uVar3 = *(uint *)(param_1 + 0x28);
      if ((int)uVar3 < 0x60) {
        lVar6 = *(long *)(param_1 + 0x18);
        auVar11 = auVar4;
        if (lVar6 == 0) {
LAB_0239a9d0:
                    /* WARNING: Subroutine does not return */
          FUN_02133224(auVar11._0_8_,auVar11._8_8_);
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar3) {
LAB_0239a9d4:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar7 = (long *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
        *plVar7 = lVar9;
        auVar11 = thunk_FUN_02134474(plVar7,lVar9);
        lVar9 = *(long *)(param_1 + 0x20);
        if (lVar9 == 0) goto LAB_0239a9d0;
        if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0x28)) goto LAB_0239a9d4;
        puVar8 = (undefined8 *)(lVar9 + (long)(int)*(uint *)(param_1 + 0x28) * 8 + 0x20);
        *puVar8 = 0;
        thunk_FUN_02134474(puVar8,0);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
    }
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  else {
    Dino_BusSand_App_Meta_Journey_JourneyBytes__Rewind_2295424();
    *(undefined8 *)(param_1 + 0x30) = uVar10;
  }
  return cVar2 == '\0';
}

