/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$NoteContinue
void Dino_BusSand_App_Meta_JourneyTracking__NoteContinue (System_String_o* action, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$NoteContinue
   void Dino_BusSand_App_Meta_JourneyTracking__NoteContinue (System_String_o* action, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__NoteContinue_2219b14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  
  puVar2 = PTR_DAT_04cabb38;
  if ((bRam0000000004f9bd9b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cabb38);
    FUN_02132f7c(PTR_DAT_04cac788);
    FUN_02132f7c(PTR_DAT_04cac790);
    bRam0000000004f9bd9b = 1;
  }
  puVar1 = PTR_DAT_04caba90;
  uVar3 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)puVar2,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cac790,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cac788,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar4 = *(long *)puVar1;
      uVar5 = 2;
    }
    else {
      lVar4 = *(long *)puVar1;
      uVar5 = 1;
    }
  }
  else {
    lVar4 = *(long *)puVar1;
    uVar5 = 0;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x24) = uVar5;
  return;
}

