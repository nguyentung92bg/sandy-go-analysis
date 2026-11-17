/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$CloseGuide
void Dino_BusSand_Cheat_CheatManager__CloseGuide (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$CloseGuide
   void Dino_BusSand_Cheat_CheatManager__CloseGuide (const MethodInfo* method); */

void Dino_BusSand_Cheat_CheatManager__CloseGuide_235ece8(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((bRam0000000004f9c779 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac580);
    FUN_02132f7c(PTR_DAT_04cac518);
    bRam0000000004f9c779 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar7 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
  if ((uVar2 & 1) != 0) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                      (lVar7,*(undefined8 *)PTR_DAT_04cac518);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)PTR_DAT_04cac580;
      if (*(long *)(lVar4 + 0x38) == 0) {
        FUN_02132f7c(PTR_DAT_04cb1b70);
        if (*(long *)(lVar4 + 0x38) == 0) {
          FUN_0216b4cc(lVar4);
        }
      }
      if ((*(long *)(lVar7 + 0x38) != 0) &&
         (lVar3 = System_Collections_Generic_List_object___ToArray_3a83728
                            (*(long *)(lVar7 + 0x38),*(undefined8 *)PTR_DAT_04cb1b70), lVar3 != 0))
      {
        if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
          uVar2 = 0;
          uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
          do {
            if (uVar6 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            uVar8 = *(undefined8 *)(lVar3 + 0x20 + uVar2 * 8);
            lVar5 = **(long **)(lVar4 + 0x38);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0216b470(lVar5);
            }
            lVar5 = thunk_FUN_0216e7a0(uVar8,lVar5);
            if (lVar5 != 0) {
              Dino_BusSand_App_UI_UIManager__Close_21fe9a0(lVar7,uVar8,0);
            }
            uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
            uVar2 = uVar2 + 1;
          } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

