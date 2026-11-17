/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<Intro>d__41$$MoveNext
bool Dino_BusSand_App_UI_LiveOpsHome__Intro_d__41__MoveNext (Dino_BusSand_App_UI_LiveOpsHome__Intro_d__41_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.LiveOpsHome.<Intro>d__41$$MoveNext
   bool Dino_BusSand_App_UI_LiveOpsHome__Intro_d__41__MoveNext
   (Dino_BusSand_App_UI_LiveOpsHome__Intro_d__41_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_LiveOpsHome__Intro_d__41__MoveNext_232483c(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_24;
  
  if ((bRam0000000004f9c5d7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cafb00);
    FUN_02132f7c(PTR_DAT_04cb8c38);
    FUN_02132f7c(PTR_DAT_04cb8c40);
    bRam0000000004f9c5d7 = 1;
  }
  cVar2 = cRam0000000004f9b94d;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (cVar2 == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    uStack_24 = *(undefined4 *)(param_1 + 0x20);
    uVar5 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    uVar3 = FUN_02133100(*(undefined8 *)PTR_DAT_04cafb00,&uStack_24);
    uVar3 = Dino_BusSand_App_UI_PostWinFlow__Show_object__283e038
                      (uVar5,*(undefined8 *)PTR_DAT_04cb8c40,uVar3,*(undefined8 *)PTR_DAT_04cb8c38);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    lVar4 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    }
  }
  return iVar1 == 0;
}

