/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$CollectHallCommands
void Dino_BusSand_App_Meta_GiftPackFeature__CollectHallCommands (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_HallQueue_o* q, bool fromGame, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackFeature$$CollectHallCommands
   void Dino_BusSand_App_Meta_GiftPackFeature__CollectHallCommands
   (Dino_BusSand_App_Meta_GiftPackFeature_o* __this, Dino_BusSand_App_Meta_HallQueue_o* q, bool
   fromGame, const MethodInfo* method); */

void Dino_BusSand_App_Meta_GiftPackFeature__CollectHallCommands_223ac0c(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  
  if ((bRam0000000004f9becb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2cb8);
    FUN_02132f7c(PTR_DAT_04cacd48);
    FUN_02132f7c(PTR_DAT_04cad858);
    FUN_02132f7c(PTR_DAT_04cb35d0);
    FUN_02132f7c(PTR_DAT_04cad6e0);
    FUN_02132f7c(PTR_DAT_04cb35d8);
    FUN_02132f7c(PTR_DAT_04cb35e0);
    FUN_02132f7c(PTR_DAT_04cb35e8);
    FUN_02132f7c(PTR_DAT_04cb35f0);
    FUN_02132f7c(PTR_DAT_04cb35f8);
    FUN_02132f7c(PTR_DAT_04cb3600);
    bRam0000000004f9becb = 1;
  }
  Dino_BusSand_App_Meta_GiftPackFeature__EnsureInit_2235d04(param_1);
  Dino_BusSand_App_Meta_GiftPackFeature__RefreshActiveStates_223669c(param_1);
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar7 = System_Collections_Generic_List_int___ToArray_3a2db00
                        (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cad6e0),
     puVar4 = PTR_DAT_04cb35f8, puVar3 = PTR_DAT_04cb35e0, puVar11 = PTR_DAT_04cb35d8, lVar7 != 0))
  {
    if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
      uVar14 = 0;
      uVar12 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar14) goto LAB_0233af44;
        uVar2 = *(undefined4 *)(lVar7 + 0x20 + uVar14 * 4);
        lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        System_Object___ctor_4870e5c(lVar8,0);
        if (lVar8 == 0) goto LAB_0233af40;
        *(long *)(lVar8 + 0x18) = param_1;
        thunk_FUN_02134474((long *)(lVar8 + 0x18),param_1);
        *(undefined4 *)(lVar8 + 0x10) = uVar2;
        uVar9 = System_Int32__ToString_482d750((undefined4 *)(lVar8 + 0x10),0);
        uVar9 = System_String__Concat_46c82e0(*(undefined8 *)puVar4,uVar9,0);
        uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2cb8);
        System_Func_object____ctor_379de3c(uVar10,lVar8,*(undefined8 *)puVar11,0);
        if (param_2 == 0) goto LAB_0233af40;
        Dino_BusSand_App_Meta_HallQueue__Add_222ca74(param_2,0x55,uVar9,uVar10);
        uVar12 = (ulong)*(uint *)(lVar7 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)(int)*(uint *)(lVar7 + 0x18));
    }
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 != 0) {
      lVar8 = *(long *)(param_1 + 0x38);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if ((lVar8 != 0) &&
         (lVar7 = System_Collections_Generic_List_object___ToArray_3a83728
                            (lVar8,*(undefined8 *)PTR_DAT_04cb35d0), puVar4 = PTR_DAT_04cb3600,
         puVar3 = PTR_DAT_04cb35f0, puVar11 = PTR_DAT_04cb35e8, lVar7 != 0)) {
        if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
          uVar14 = 0;
          uVar12 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          do {
            if (uVar12 <= uVar14) {
LAB_0233af44:
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            uVar9 = *(undefined8 *)(lVar7 + 0x20 + uVar14 * 8);
            lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
            System_Object___ctor_4870e5c(lVar8,0);
            if (lVar8 == 0) goto LAB_0233af40;
            *(long *)(lVar8 + 0x18) = param_1;
            thunk_FUN_02134474((long *)(lVar8 + 0x18),param_1);
            puVar13 = (undefined8 *)(lVar8 + 0x10);
            *puVar13 = uVar9;
            thunk_FUN_02134474(puVar13,uVar9);
            uVar9 = System_String__Concat_46c82e0(*(undefined8 *)puVar4,*puVar13,0);
            uVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2cb8);
            System_Func_object____ctor_379de3c(uVar10,lVar8,*(undefined8 *)puVar11,0);
            if (param_2 == 0) goto LAB_0233af40;
            Dino_BusSand_App_Meta_HallQueue__Add_222ca74(param_2,0x41,uVar9,uVar10);
            uVar12 = (ulong)*(uint *)(lVar7 + 0x18);
            uVar14 = uVar14 + 1;
          } while ((long)uVar14 < (long)(int)*(uint *)(lVar7 + 0x18));
        }
        lVar7 = *(long *)(param_1 + 0x38);
        if (lVar7 != 0) {
          iVar1 = *(int *)(lVar7 + 0x18);
          *(undefined4 *)(lVar7 + 0x18) = 0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (iVar1 < 1) {
            return;
          }
          puVar13 = *(undefined8 **)(lVar7 + 0x10);
          if (puVar13 == (undefined8 *)0x0) {
            thunk_FUN_021985a8(PTR_DAT_04cbe5c8,0,iVar1,0);
            uVar10 = thunk_FUN_0216e89c();
            uVar9 = thunk_FUN_021985a8(PTR_DAT_04cc29c8);
            System_ArgumentNullException___ctor_47afb54(uVar10,uVar9,0);
          }
          else {
            if (iVar1 < 0) {
              thunk_FUN_021985a8(PTR_DAT_04cc27d8,0,iVar1,0);
              uVar10 = thunk_FUN_0216e89c();
              puVar11 = PTR_DAT_04d13dc0;
            }
            else {
              iVar5 = FUN_02143bfc(puVar13,0);
              if (iVar5 < 1) {
                iVar6 = System_Array__get_Length_4848454(puVar13);
                if (-iVar5 <= iVar6 - iVar1) {
                  iVar6 = il2cpp_array_element_size(*puVar13);
                  (*(code *)PTR_memset_04d166b8)
                            ((long)puVar13 + (long)iVar6 * (long)-iVar5 + 0x20,0,
                             (long)(iVar6 * iVar1));
                  return;
                }
                thunk_FUN_021985a8(PTR_DAT_04cc27d8);
                uVar10 = thunk_FUN_0216e89c();
                puVar11 = PTR_DAT_04d13dd0;
              }
              else {
                thunk_FUN_021985a8(PTR_DAT_04cc27d8);
                uVar10 = thunk_FUN_0216e89c();
                puVar11 = PTR_DAT_04d13dc8;
              }
            }
            uVar9 = thunk_FUN_021985a8(puVar11);
            System_IndexOutOfRangeException___ctor_482b694(uVar10,uVar9,0);
          }
          uVar9 = thunk_FUN_021985a8(PTR_DAT_04d13dd8);
                    /* WARNING: Subroutine does not return */
          FUN_021330e8(uVar10,uVar9);
        }
      }
    }
  }
LAB_0233af40:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

