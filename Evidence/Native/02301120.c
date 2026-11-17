/* IL2CPP: Dino.BusSand.App.UI.AnimEventSink$$OnAnimationEvent
void Dino_BusSand_App_UI_AnimEventSink__OnAnimationEvent (Dino_BusSand_App_UI_AnimEventSink_o* __this, System_String_o* evt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.AnimEventSink$$OnAnimationEvent
   void Dino_BusSand_App_UI_AnimEventSink__OnAnimationEvent (Dino_BusSand_App_UI_AnimEventSink_o*
   __this, System_String_o* evt, const MethodInfo* method); */

void Dino_BusSand_App_UI_AnimEventSink__OnAnimationEvent_2201120
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  
  puVar2 = PTR_DAT_04cb19b8;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bca0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb19b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bca0 = 1;
  }
  plVar3 = (long *)UnityEngine_Component__GetComponentInParent_object__26f9d74
                             (param_1,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(plVar3,0,0);
  if ((uVar4 & 1) != 0) {
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x023011c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x188))(plVar3,param_2,*(undefined8 *)(*plVar3 + 400));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

