/* IL2CPP: Dino.BusSand.App.MiniJson$$ParseArray
System_Collections_Generic_List_object__o* Dino_BusSand_App_MiniJson__ParseArray (System_String_o* s, int32_t* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.MiniJson$$ParseArray
   System_Collections_Generic_List_object__o* Dino_BusSand_App_MiniJson__ParseArray
   (System_String_o* s, int32_t* i, const MethodInfo* method); */

long Dino_BusSand_App_MiniJson__ParseArray_2155230(long param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  short sVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_04ca9b98;
  puVar3 = PTR_DAT_04ca9b90;
  if ((bRam0000000004f9b7d9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ba0);
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    bRam0000000004f9b7d9 = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar6,*(undefined8 *)puVar4);
  *param_2 = *param_2 + 1;
                    /* try { // try from 022552b4 to 023553af has its CatchHandler @ 022552b4
                       catch() { ... } // from try @ 022552b4 with catch @ 022552b4
                       catch() { ... } // from try @ 022553bc with catch @ 022552b4 */
  Dino_BusSand_App_MiniJson__Skip_2155004(param_1,param_2);
  puVar3 = PTR_DAT_04ca9ba0;
  if (param_1 != 0) {
    iVar1 = *param_2;
    if (iVar1 < *(int *)(param_1 + 0x10)) {
      do {
        sVar5 = System_String__get_Chars_46ccb24(param_1,iVar1,0);
        if (sVar5 == 0x5d) {
          *param_2 = *param_2 + 1;
          return lVar6;
        }
        sVar5 = System_String__get_Chars_46ccb24(param_1,*param_2,0);
        if (sVar5 == 0x2c) {
          *param_2 = *param_2 + 1;
        }
        else {
          uVar7 = Dino_BusSand_App_MiniJson__ParseValue_2154e04(param_1,param_2);
          if (lVar6 == 0) goto LAB_022553bc;
          lVar8 = *(long *)(lVar6 + 0x10);
          lVar9 = *(long *)puVar3;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_022553bc;
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
            thunk_FUN_02134474();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
          }
        }
        Dino_BusSand_App_MiniJson__Skip_2155004(param_1,param_2);
        iVar1 = *param_2;
      } while (iVar1 < *(int *)(param_1 + 0x10));
    }
                    /* try { // try from 022553b0 to 023553bb has its CatchHandler @ 022553ec */
    return lVar6;
  }
LAB_022553bc:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022553bc to 02355407 has its CatchHandler @ 022552b4 */
  FUN_02133224();
}

