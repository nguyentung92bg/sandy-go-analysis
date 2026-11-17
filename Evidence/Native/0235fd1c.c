/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSave$$ClearSession
void Dino_BusSand_App_Meta_RacingRobotSave__ClearSession (Dino_BusSand_App_Meta_RacingRobotSave_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSave$$ClearSession
   void Dino_BusSand_App_Meta_RacingRobotSave__ClearSession
   (Dino_BusSand_App_Meta_RacingRobotSave_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSave__ClearSession_225fd1c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((bRam0000000004f9c035 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb43e8);
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caeb10);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caeb08);
    bRam0000000004f9c035 = 1;
  }
  plVar2 = (long *)(param_1 + 0x30);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar1,*(undefined8 *)PTR_DAT_04cad6e8);
    *plVar2 = lVar1;
    thunk_FUN_02134474(plVar2,lVar1);
  }
  else {
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
  }
  plVar2 = (long *)(param_1 + 0x38);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar1,*(undefined8 *)PTR_DAT_04cad6e8);
    *plVar2 = lVar1;
    thunk_FUN_02134474(plVar2,lVar1);
  }
  else {
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
  }
  plVar2 = (long *)(param_1 + 0x40);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caeb08);
    System_Collections_Generic_List_float____ctor_3ac202c(lVar1,*(undefined8 *)PTR_DAT_04caeb10);
    *plVar2 = lVar1;
    thunk_FUN_02134474(plVar2,lVar1);
  }
  else {
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}

