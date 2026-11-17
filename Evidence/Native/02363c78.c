/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$Dispose
void Dino_BusSand_App_Meta_RacingRobotSession__Dispose (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.RacingRobotSession$$Dispose
   void Dino_BusSand_App_Meta_RacingRobotSession__Dispose
   (Dino_BusSand_App_Meta_RacingRobotSession_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_RacingRobotSession__Dispose_2263c78(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    if ((bRam0000000004f9c035 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cb43e8);
      FUN_02132f7c(PTR_DAT_04cad858);
      FUN_02132f7c(PTR_DAT_04cad6e8);
      FUN_02132f7c(PTR_DAT_04caeb10);
      FUN_02132f7c(PTR_DAT_04caa1c8);
      FUN_02132f7c(PTR_DAT_04caeb08);
      bRam0000000004f9c035 = 1;
    }
    plVar3 = (long *)(lVar1 + 0x30);
    lVar2 = *plVar3;
    if (lVar2 == 0) {
      lVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
      System_Collections_Generic_List_int____ctor_3a2b7dc(lVar2,*(undefined8 *)PTR_DAT_04cad6e8);
      *plVar3 = lVar2;
      thunk_FUN_02134474(plVar3,lVar2);
    }
    else {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    }
    plVar3 = (long *)(lVar1 + 0x38);
    lVar2 = *plVar3;
    if (lVar2 == 0) {
      lVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
      System_Collections_Generic_List_int____ctor_3a2b7dc(lVar2,*(undefined8 *)PTR_DAT_04cad6e8);
      *plVar3 = lVar2;
      thunk_FUN_02134474(plVar3,lVar2);
    }
    else {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    }
    plVar3 = (long *)(lVar1 + 0x40);
    lVar2 = *plVar3;
    if (lVar2 == 0) {
      lVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caeb08);
      System_Collections_Generic_List_float____ctor_3ac202c(lVar2,*(undefined8 *)PTR_DAT_04caeb10);
      *plVar3 = lVar2;
      thunk_FUN_02134474(plVar3,lVar2);
    }
    else {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    }
    *(undefined1 *)(lVar1 + 0x48) = 0;
    *(undefined4 *)(lVar1 + 0x4c) = 0;
    *(undefined4 *)(lVar1 + 0x50) = 0;
    return;
  }
  return;
}

