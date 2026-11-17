/* IL2CPP: Dino.BusSand.App.UI.BonusBankOpenPanel$$SetState
void Dino_BusSand_App_UI_BonusBankOpenPanel__SetState (Dino_BusSand_App_UI_BonusBankOpenPanel_o* __this, int32_t s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BonusBankOpenPanel$$SetState
   void Dino_BusSand_App_UI_BonusBankOpenPanel__SetState (Dino_BusSand_App_UI_BonusBankOpenPanel_o*
   __this, int32_t s, const MethodInfo* method); */

void Dino_BusSand_App_UI_BonusBankOpenPanel__SetState_21cbf28(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022cbf48 to 023cbf4f has its CatchHandler @ 022cbf78 */
  if ((bRam0000000004f9bb1c & 1) == 0) {
                    /* try { // try from 022cbf50 to 023cbfb7 has its CatchHandler @ 022cbe4c */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabc58);
    bRam0000000004f9bb1c = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x40);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cbf48 with catch @ 022cbf78
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cbee0 with catch @ 022cbf7c
                        */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cbe98 with catch @ 022cbf80
                        */
    thunk_FUN_0218fdac();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cbe8c with catch @ 022cbf90
                        */
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cbed0 with catch @ 022cbf94
                       catch(type#1 @ 00000000) { ... } // from try @ 022cbf20 with catch @ 022cbf94
                        */
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 022cc000 to 023cc00b has its CatchHandler @ 022cc134 */
    return;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cbe70 with catch @ 022cbfa4
                        */
    uVar6 = UnityEngine_Animator__get_runtimeAnimatorController_43413b8(*(long *)(param_1 + 0x40),0)
    ;
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* try { // try from 022cbfb8 to 023cbfbf has its CatchHandler @ 022cbfc8 */
      thunk_FUN_0218fdac(lVar4);
    }
                    /* try { // try from 022cbfc0 to 023cbfcb has its CatchHandler @ 022cbe4c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cbfb8 with catch @ 022cbfc8
                        */
                    /* try { // try from 022cbfcc to 023cbfcf has its CatchHandler @ 022cbfd8 */
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
                    /* try { // try from 022cbfd0 to 023cbfdb has its CatchHandler @ 022cbe4c */
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x40);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cbfcc with catch @ 022cbfd8
                        */
    if (lVar4 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022cc0e0 with catch @ 022cbfdc
                       catch(type#1 @ 00000000) { ... } // from try @ 022cc150 with catch @ 022cbfdc
                       catch(type#1 @ 00000000) { ... } // from try @ 022cc160 with catch @ 022cbfdc
                        */
      lVar3 = *(long *)PTR_DAT_04cabc58;
      if ((bRam0000000004fa4ef0 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf5c10,lVar3,param_2,0);
        FUN_02132f7c(PTR_DAT_04cf5680);
        FUN_02132f7c(PTR_DAT_04cd5630);
        bRam0000000004fa4ef0 = 1;
      }
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar5 = *(long *)(lVar4 + 0x10);
      if (lVar5 != 0) {
        if (lVar3 == 0) {
          uStack_60 = 0;
          uStack_58 = 0;
        }
        else if (*(int *)(lVar3 + 0x10) == 0) {
          uVar6 = System_UIntPtr__op_Explicit_488617c(1,0);
          uVar6 = System_UIntPtr__op_Explicit_4886184(uVar6,0);
          uStack_40 = 0;
          uStack_38 = 0;
          UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140(&uStack_40,uVar6,0,0);
          uStack_58 = uStack_38;
          uStack_60 = uStack_40;
        }
        else {
          if (cRam0000000004fa1b52 == '\0') {
            FUN_02132f7c(PTR_DAT_04cc73d8);
            cRam0000000004fa1b52 = '\x01';
          }
          uStack_50 = System_String__GetRawStringData_46cfab8(lVar3,0);
          uStack_48 = (ulong)*(uint *)(lVar3 + 0x10);
          uVar6 = System_ReadOnlySpan_char___GetPinnableReference_2de139c
                            (&uStack_50,*(undefined8 *)PTR_DAT_04cf5680);
          UnityEngine_Bindings_ManagedSpanWrapper___ctor_43c6140
                    (&uStack_60,uVar6,uStack_48 & 0xffffffff,0);
        }
        if (pcRam0000000004fa52b0 == (code *)0x0) {
          pcRam0000000004fa52b0 = (code *)FUN_02132f40(&UNK_00e67564);
        }
        (*pcRam0000000004fa52b0)(lVar5,&uStack_60,param_2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

