/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton.<PlayProgressFly>d__24$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingHallButton__PlayProgressFly_d__24__MoveNext (Dino_BusSand_App_UI_YachtRacingHallButton__PlayProgressFly_d__24_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton.<PlayProgressFly>d__24$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingHallButton__PlayProgressFly_d__24__MoveNext
   (Dino_BusSand_App_UI_YachtRacingHallButton__PlayProgressFly_d__24_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_YachtRacingHallButton__PlayProgressFly_d__24__MoveNext_21ea218(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  
                    /* try { // try from 022ea224 to 023ea2bb has its CatchHandler @ 022ea224
                       catch() { ... } // from try @ 022ea224 with catch @ 022ea224
                       catch() { ... } // from try @ 022ea2c4 with catch @ 022ea224 */
  if ((bRam0000000004f9bbef & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0f30);
    bRam0000000004f9bbef = 1;
  }
  puVar2 = PTR_DAT_04cb0f30;
  puVar1 = PTR_DAT_04ca9ae8;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar6 = 0xffffffff;
LAB_022ea2f4:
    *(undefined4 *)(param_1 + 0x10) = uVar6;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar7 = **(long **)(*(long *)puVar2 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
    if ((uVar4 & 1) == 0) {
      if (lVar7 == 0) {
LAB_022ea34c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar3 = *(undefined8 *)(lVar7 + 0x20);
                    /* try { // try from 022ea2bc to 023ea2c3 has its CatchHandler @ 022ea320 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 022ea2c4 to 023ea34f has its CatchHandler @ 022ea224 */
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
      if ((uVar4 & 1) == 0) {
        if (*(long *)(lVar7 + 0x20) == 0) goto LAB_022ea34c;
        if ((*(char *)(*(long *)(lVar7 + 0x20) + 0x2c) == '\0') && (*(long *)(lVar7 + 0x28) != 0)) {
          lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar7,0);
          if (lVar5 == 0) goto LAB_022ea34c;
                    /* catch() { ... } // from try @ 022ea2bc with catch @ 022ea320 */
          uVar4 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar5,0);
          if ((uVar4 & 1) != 0) {
            uVar3 = Dino_BusSand_App_UI_YachtRacingHallButton__ProgressAnim_21e9e40(lVar7);
            *(undefined8 *)(param_1 + 0x18) = uVar3;
            thunk_FUN_02134474();
            uVar6 = 1;
            uVar3 = 1;
            goto LAB_022ea2f4;
          }
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

