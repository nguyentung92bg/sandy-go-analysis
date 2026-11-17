/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$WrapInbound
void Dino_BusSand_App_Meta_JourneyTracking__WrapInbound (Dino_BusSand_Core_StageEngine_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$WrapInbound
   void Dino_BusSand_App_Meta_JourneyTracking__WrapInbound (Dino_BusSand_Core_StageEngine_o* e,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__WrapInbound_221ba70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04cb2898;
  if ((bRam0000000004f9bd8d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb28a0);
    FUN_02132f7c(PTR_DAT_04cb28a8);
    FUN_02132f7c(PTR_DAT_04cb2898);
    bRam0000000004f9bd8d = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  puVar2 = PTR_DAT_04cb28a8;
  puVar1 = PTR_DAT_04cb28a0;
  if (param_1 != 0) {
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x130);
      thunk_FUN_02134474();
      uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      System_Func_int__int____ctor_37a23e0(uVar4,lVar3,*(undefined8 *)puVar2,0);
      *(undefined8 *)(param_1 + 0x130) = uVar4;
      if (iRam00000000051c1b10 != 0) {
        FUN_02220bf0(1L << (param_1 + 0x130U >> 0xc & 0x3f),
                     (param_1 + 0x130U >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return;
}

