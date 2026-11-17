/* IL2CPP: Dino.BusSand.AudioHub$$Norm
System_String_o* Dino_BusSand_AudioHub__Norm (System_String_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$Norm
   System_String_o* Dino_BusSand_AudioHub__Norm (System_String_o* s, const MethodInfo* method); */

void Dino_BusSand_AudioHub__Norm_2374274(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  if ((bRam0000000004f9c7e6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa488);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c7e6 = 1;
  }
  if ((param_1 != 0) &&
     (lVar2 = System_String__Replace_46d4a70
                        (param_1,*(undefined8 *)PTR_DAT_04caa488,*(undefined8 *)PTR_DAT_04ca9c30,0),
     puVar1 = PTR_DAT_04caa370, lVar2 != 0)) {
    if ((bRam0000000004facb19 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04caa370,0);
      bRam0000000004facb19 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    plVar3 = (long *)System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x047d6d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x1b8))(plVar3,lVar2,*(undefined8 *)(*plVar3 + 0x1c0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

