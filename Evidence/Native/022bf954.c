/* IL2CPP: Dino.BusSand.App.UI.EventIntroPanel.<>c$$<BuildBusStreak>b__8_1
void Dino_BusSand_App_UI_EventIntroPanel___c___BuildBusStreak_b__8_1 (Dino_BusSand_App_UI_EventIntroPanel___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventIntroPanel.<>c$$<BuildBusStreak>b__8_1
   void Dino_BusSand_App_UI_EventIntroPanel___c___BuildBusStreak_b__8_1
   (Dino_BusSand_App_UI_EventIntroPanel___c_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_EventIntroPanel___c___BuildBusStreak_b__8_1_21bf954(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_04caba50;
                    /* try { // try from 022bf95c to 023bf96b has its CatchHandler @ 022bf984 */
                    /* try { // try from 022bf96c to 023bf997 has its CatchHandler @ 022bf930 */
  if ((bRam0000000004f9bada & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    bRam0000000004f9bada = 1;
  }
                    /* catch() { ... } // from try @ 022bf95c with catch @ 022bf984 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88f == '\0') {
    FUN_02132f7c(PTR_DAT_04caba50);
    cRam0000000004f9b88f = '\x01';
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04cac458;
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9b879 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458,0);
    FUN_02132f7c(PTR_DAT_04cac670);
    FUN_02132f7c(PTR_DAT_04cac680);
    FUN_02132f7c(PTR_DAT_04cac688);
    bRam0000000004f9b879 = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04cac430;
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 4) != '\0') {
    lVar6 = *(long *)(lVar6 + 0x28);
    uVar5 = FUN_02133100(*(undefined8 *)PTR_DAT_04cac670,&stack0xffffffffffffffdc);
    if (lVar6 != 0) {
      Dino_BusSand_App_UI_UIManager__Open_object__2945314
                (lVar6,*(undefined8 *)PTR_DAT_04cac688,2,uVar5,*(undefined8 *)PTR_DAT_04cac680);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9b861 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac420);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac438);
    FUN_02132f7c(PTR_DAT_04cac430);
    bRam0000000004f9b861 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_GameApp___c__DisplayClass93_0___ctor_216b3e4(lVar4,0);
  puVar1 = PTR_DAT_04caba50;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(long *)(lVar4 + 0x10) = lVar6;
  thunk_FUN_02134474((long *)(lVar4 + 0x10),lVar6);
  lVar2 = *(long *)puVar1;
  *(undefined4 *)(lVar4 + 0x18) = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_App_GameApp__get_CanStartLevel_2165d14();
  if ((uVar3 & 1) != 0) {
    lVar4 = Dino_BusSand_App_GameApp__EnterLevelRoutine_2165eac(lVar6,*(undefined4 *)(lVar4 + 0x18))
    ;
    if (lVar4 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
      uVar7 = thunk_FUN_0216e89c();
      uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
      System_NullReferenceException___ctor_483267c(uVar7,uVar5,0);
    }
    else {
      uVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
      if ((uVar3 & 1) != 0) {
        if ((bRam0000000004fa84ef & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7890);
          bRam0000000004fa84ef = 1;
        }
        if (lVar6 != 0) {
          lVar2 = *(long *)(lVar6 + 0x10);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
          }
          if (pcRam0000000004fa8560 == (code *)0x0) {
            pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8560)(lVar2,lVar4);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar7 = thunk_FUN_0216e89c();
      uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
      System_ArgumentException___ctor_47b660c(uVar7,uVar5,0);
    }
    uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar7,uVar5);
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac420);
  System_Action_bool____ctor_35ee0e8(lVar2,lVar4,*(undefined8 *)PTR_DAT_04cac438,0);
  if ((bRam0000000004f9b87b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac5a8);
    FUN_02132f7c(PTR_DAT_04cac5b0);
    bRam0000000004f9b87b = 1;
  }
  lVar6 = *(long *)(lVar6 + 0x28);
  uVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&stack0xffffffffffffffdc);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar6 != 0) {
    lVar6 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                      (lVar6,*(undefined8 *)PTR_DAT_04cac5b0,2,uVar5,*(undefined8 *)PTR_DAT_04cac5a8
                      );
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    if ((uVar3 & 1) == 0) {
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),0,*(undefined8 *)(lVar2 + 0x28));
      }
    }
    else {
      if (lVar6 == 0) goto LAB_02265ea8;
      *(long *)(lVar6 + 0x38) = lVar2;
      thunk_FUN_02134474((long *)(lVar6 + 0x38),lVar2);
    }
    return;
  }
LAB_02265ea8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

