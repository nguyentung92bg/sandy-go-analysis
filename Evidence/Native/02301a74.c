/* IL2CPP: Dino.BusSand.App.Meta.AppUpdate$$add_LateAnswer
void Dino_BusSand_App_Meta_AppUpdate__add_LateAnswer (System_Action_AppUpdate_Result__o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.AppUpdate$$add_LateAnswer
   void Dino_BusSand_App_Meta_AppUpdate__add_LateAnswer (System_Action_AppUpdate_Result__o* value,
   const MethodInfo* method); */

void Dino_BusSand_App_Meta_AppUpdate__add_LateAnswer_2201a74(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cb1c08;
  if ((bRam0000000004f9bca9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac558);
    FUN_02132f7c(PTR_DAT_04cb1c08);
    bRam0000000004f9bca9 = 1;
  }
  puVar1 = PTR_DAT_04cac558;
  lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
  do {
    lVar4 = System_Delegate__Combine_4872324(lVar6,param_1,0);
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      uVar7 = *(undefined8 *)puVar1;
      lVar5 = thunk_FUN_0216e7a0(lVar4,uVar7);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar4,uVar7);
      }
    }
    lVar4 = FUN_0216aff4(*(long *)(*(long *)puVar2 + 0xb8) + 0x28,lVar5,lVar6);
    bVar3 = lVar4 != lVar6;
    lVar6 = lVar4;
  } while (bVar3);
  return;
}

