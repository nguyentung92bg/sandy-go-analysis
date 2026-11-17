/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$.ctor
void Dino_BusSand_App_Meta_WeeklyCupModel___ctor (Dino_BusSand_App_Meta_WeeklyCupModel_o* __this, Dino_BusSand_App_Meta_WeeklyCupData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.WeeklyCupModel$$.ctor
   void Dino_BusSand_App_Meta_WeeklyCupModel___ctor (Dino_BusSand_App_Meta_WeeklyCupModel_o* __this,
   Dino_BusSand_App_Meta_WeeklyCupData_o* data, const MethodInfo* method); */

void Dino_BusSand_App_Meta_WeeklyCupModel___ctor_2230008(long param_1,long param_2)

{
  long *plVar1;
  
  if ((bRam0000000004f9be74 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb30b0);
    bRam0000000004f9be74 = 1;
  }
  System_Object___ctor_4870e5c(param_1,0);
  if (param_2 == 0) {
    param_2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb30b0);
    Dino_BusSand_App_Meta_WeeklyCupData___ctor_2230f6c();
  }
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 0x10);
    *plVar1 = param_2;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)plVar1 >> 0xc & 0x3f),
                   ((ulong)plVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

