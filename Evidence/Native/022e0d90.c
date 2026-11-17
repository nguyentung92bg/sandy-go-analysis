/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$HideGetPanel
void Dino_BusSand_App_UI_StreakRateHallBar__HideGetPanel (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$HideGetPanel
   void Dino_BusSand_App_UI_StreakRateHallBar__HideGetPanel (const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakRateHallBar__HideGetPanel_21e0d90(void)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_04cae9a8;
  if ((bRam0000000004f9bbab & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04cb0c48);
    FUN_02132f7c(PTR_DAT_04cb0c50);
    bRam0000000004f9bbab = 1;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
  if (lVar5 != 0) {
    uVar6 = UnityEngine_Transform__Find_43d4bec(lVar5,*(undefined8 *)PTR_DAT_04cb0c48,0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetActive_21df95c(uVar6,0);
    lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    if (lVar5 != 0) {
      lVar5 = UnityEngine_Transform__Find_43d4bec(lVar5,*(undefined8 *)PTR_DAT_04cb0c50,0);
      puVar1 = PTR_DAT_04ca9ae8;
      if ((bRam0000000004f9bbb3 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9bbb3 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if ((lVar5 != 0) &&
         (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0), lVar4 != 0)) {
        uVar2 = UnityEngine_GameObject__get_activeSelf_43c14cc(lVar4,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar5,0);
        if (lVar5 != 0) {
          if ((bRam0000000004fa8360 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
            bRam0000000004fa8360 = 1;
          }
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar4 = *(long *)(lVar5 + 0x10);
          if (lVar4 != 0) {
            if (pcRam0000000004fa8430 == (code *)0x0) {
              pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
            }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8430)(lVar4,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar5,0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

