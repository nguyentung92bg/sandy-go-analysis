/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$Run
void Dino_BusSand_Cheat_QaJourney__Run (int32_t toLevel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$Run
   void Dino_BusSand_Cheat_QaJourney__Run (int32_t toLevel, const MethodInfo* method); */

void Dino_BusSand_Cheat_QaJourney__Run_236fa24(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04cbafc8;
  if ((bRam0000000004f9c7c9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbafd8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbafc8);
                    /* try { // try from 0246fa7c to 0256ff8f has its CatchHandler @ 0246fa7c
                       catch() { ... } // from try @ 0246fa7c with catch @ 0246fa7c
                       catch() { ... } // from try @ 0246fff4 with catch @ 0246fa7c
                       catch() { ... } // from try @ 024700b8 with catch @ 0246fa7c
                       catch() { ... } // from try @ 024709b0 with catch @ 0246fa7c
                       catch() { ... } // from try @ 024709e8 with catch @ 0246fa7c
                       catch() { ... } // from try @ 02470a1c with catch @ 0246fa7c
                       catch() { ... } // from try @ 02470a50 with catch @ 0246fa7c */
    FUN_02132f7c(PTR_DAT_04cbafe0);
    bRam0000000004f9c7c9 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9c7d6 == '\0') {
    FUN_02132f7c(PTR_DAT_04cbafc8);
    cRam0000000004f9c7d6 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  if (**(char **)(lVar2 + 0xb8) == '\0') {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_Cheat_QaJourney__get_App_236f8e4();
    puVar1 = PTR_DAT_04ca9ae8;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
    if ((uVar4 & 1) == 0) {
      lVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
      UnityEngine_GameObject___ctor_43c20cc(lVar2,*(undefined8 *)PTR_DAT_04cbafe0,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      UnityEngine_Object__DontDestroyOnLoad_43c8450(lVar2,0);
      if ((lVar2 == 0) ||
         (lVar2 = UnityEngine_GameObject__AddComponent_object__275a54c
                            (lVar2,*(undefined8 *)PTR_DAT_04cbafd8), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar5 = Dino_BusSand_Cheat_QaJourney__Walk_236fbb0(lVar2,param_1);
      if (lVar5 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar6 = thunk_FUN_0216e89c();
        uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar6,uVar3,0);
      }
      else {
        uVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar4 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (lVar2 != 0) {
            lVar7 = *(long *)(lVar2 + 0x10);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar2,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8560)(lVar7,lVar5);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        thunk_FUN_021985a8(PTR_DAT_04caa3a8);
        uVar6 = thunk_FUN_0216e89c();
        uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
        System_ArgumentException___ctor_47b660c(uVar6,uVar3,0);
      }
      uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar6,uVar3);
    }
  }
  return;
}

