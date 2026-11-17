/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$Clear
void Dino_BusSand_App_Meta_YachtRacingData__Clear (Dino_BusSand_App_Meta_YachtRacingData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$Clear
   void Dino_BusSand_App_Meta_YachtRacingData__Clear (Dino_BusSand_App_Meta_YachtRacingData_o*
   __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingData__Clear_22587a0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar8 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9bffe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3f20);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bffe = 1;
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)puVar8;
  thunk_FUN_02134474();
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 1;
  lVar4 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468(param_1);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x14) = 0;
  }
  lVar4 = Dino_BusSand_App_Meta_YachtRacingData__get_PlayerBot_2256468(param_1);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x18) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x81) = 0;
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (iVar1 < 1) {
      return;
    }
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    if (puVar5 == (undefined8 *)0x0) {
      thunk_FUN_021985a8(PTR_DAT_04cbe5c8,0,iVar1,0);
      uVar6 = thunk_FUN_0216e89c();
      uVar7 = thunk_FUN_021985a8(PTR_DAT_04cc29c8);
      System_ArgumentNullException___ctor_47afb54(uVar6,uVar7,0);
    }
    else {
      if (iVar1 < 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27d8,0,iVar1,0);
        uVar6 = thunk_FUN_0216e89c();
        puVar8 = PTR_DAT_04d13dc0;
      }
      else {
        iVar2 = FUN_02143bfc(puVar5,0);
        if (iVar2 < 1) {
          iVar3 = System_Array__get_Length_4848454(puVar5);
          if (-iVar2 <= iVar3 - iVar1) {
            iVar3 = il2cpp_array_element_size(*puVar5);
            (*(code *)PTR_memset_04d166b8)
                      ((long)puVar5 + (long)iVar3 * (long)-iVar2 + 0x20,0,(long)(iVar3 * iVar1));
            return;
          }
          thunk_FUN_021985a8(PTR_DAT_04cc27d8);
          uVar6 = thunk_FUN_0216e89c();
          puVar8 = PTR_DAT_04d13dd0;
        }
        else {
          thunk_FUN_021985a8(PTR_DAT_04cc27d8);
          uVar6 = thunk_FUN_0216e89c();
          puVar8 = PTR_DAT_04d13dc8;
        }
      }
      uVar7 = thunk_FUN_021985a8(puVar8);
      System_IndexOutOfRangeException___ctor_482b694(uVar6,uVar7,0);
    }
    uVar7 = thunk_FUN_021985a8(PTR_DAT_04d13dd8);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar6,uVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

