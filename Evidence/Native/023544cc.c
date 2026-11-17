/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$EnsureLists
void Dino_BusSand_App_Meta_YachtRacingData__EnsureLists (Dino_BusSand_App_Meta_YachtRacingData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$EnsureLists
   void Dino_BusSand_App_Meta_YachtRacingData__EnsureLists (Dino_BusSand_App_Meta_YachtRacingData_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingData__EnsureLists_22544cc(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if ((bRam0000000004f9bffb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caeb10);
    FUN_02132f7c(PTR_DAT_04cb3de0);
    FUN_02132f7c(PTR_DAT_04cb3de8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04caeb08);
    FUN_02132f7c(PTR_DAT_04caf748);
    FUN_02132f7c(PTR_DAT_04cb3dd8);
    FUN_02132f7c(PTR_DAT_04cb3df0);
    bRam0000000004f9bffb = 1;
  }
  plVar2 = (long *)(param_1 + 0x10);
  if (*plVar2 == 0) {
    lVar1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb3dd8);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar1,*(undefined8 *)PTR_DAT_04cb3de0);
    *plVar2 = lVar1;
    thunk_FUN_02134474(plVar2,lVar1);
  }
  plVar2 = (long *)(param_1 + 0x18);
  if (*plVar2 == 0) {
    lVar1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caf748);
    System_Collections_Generic_List_object____ctor_3a8138c(lVar1,*(undefined8 *)PTR_DAT_04cb3de8);
    *plVar2 = lVar1;
    thunk_FUN_02134474(plVar2,lVar1);
  }
  plVar2 = (long *)(param_1 + 0xa0);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb3df0);
    Dino_BusSand_App_Meta_RacingRobotSave___ctor_225fd24(lVar1,0);
    *plVar2 = lVar1;
    thunk_FUN_02134474(plVar2,lVar1);
    lVar1 = *plVar2;
    if (lVar1 == 0) goto LAB_023546f4;
  }
  plVar3 = (long *)(lVar1 + 0x30);
  if (*plVar3 == 0) {
    lVar1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar1,*(undefined8 *)PTR_DAT_04cad6e8);
    *plVar3 = lVar1;
    thunk_FUN_02134474(plVar3,lVar1);
    lVar1 = *plVar2;
    if (lVar1 == 0) goto LAB_023546f4;
  }
  plVar3 = (long *)(lVar1 + 0x38);
  if (*plVar3 == 0) {
    lVar1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
    System_Collections_Generic_List_int____ctor_3a2b7dc(lVar1,*(undefined8 *)PTR_DAT_04cad6e8);
    *plVar3 = lVar1;
    thunk_FUN_02134474(plVar3,lVar1);
    lVar1 = *plVar2;
    if (lVar1 == 0) {
LAB_023546f4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  plVar2 = (long *)(lVar1 + 0x40);
  if (*plVar2 != 0) {
    return;
  }
  lVar1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caeb08);
  System_Collections_Generic_List_float____ctor_3ac202c(lVar1,*(undefined8 *)PTR_DAT_04caeb10);
  *plVar2 = lVar1;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)plVar2 >> 0xc & 0x3f),
                 ((ulong)plVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

