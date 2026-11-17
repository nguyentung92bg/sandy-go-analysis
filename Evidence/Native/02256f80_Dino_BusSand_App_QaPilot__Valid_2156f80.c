/* IL2CPP: Dino.BusSand.App.QaPilot$$Valid
bool Dino_BusSand_App_QaPilot__Valid (System_String_o* token, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022571a4) */
/* WARNING: Removing unreachable block (ram,0x022571e4) */
/* IL2CPP: Dino.BusSand.App.QaPilot$$Valid
   bool Dino_BusSand_App_QaPilot__Valid (System_String_o* token, const MethodInfo* method); */

uint Dino_BusSand_App_QaPilot__Valid_2156f80(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auStack_3c [4];
  long *plStack_38;
  
                    /* try { // try from 02256f80 to 02356fbf has its CatchHandler @ 02256e90 */
  if ((bRam0000000004f9b7e9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9b78);
                    /* try { // try from 02256fc0 to 02356fef has its CatchHandler @ 0225703c */
    FUN_02132f7c(PTR_DAT_04cab9b0);
    FUN_02132f7c(PTR_DAT_04caa3a0);
    bRam0000000004f9b7e9 = 1;
  }
  plStack_38 = (long *)0x0;
  auStack_3c[0] = 0;
  uVar3 = System_String__IsNullOrEmpty_46d2084(param_1,0);
                    /* try { // try from 02256ff0 to 0235704f has its CatchHandler @ 02256e90 */
  uVar2 = 0;
  if ((uVar3 & 1) == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(int *)(param_1 + 0x10) < 0x81) {
                    /* catch() { ... } // from try @ 02256f04 with catch @ 0225700c */
      plVar4 = (long *)System_Security_Cryptography_SHA256__Create_470a640(0);
      plStack_38 = plVar4;
                    /* catch() { ... } // from try @ 02256efc with catch @ 0225701c */
      plVar5 = (long *)System_Text_Encoding__get_UTF8_46eb380(0);
                    /* catch() { ... } // from try @ 02256ed8 with catch @ 0225702c
                       catch() { ... } // from try @ 02256f10 with catch @ 0225702c */
      uVar6 = System_String__Trim_46d6ee0(param_1,0);
                    /* catch() { ... } // from try @ 02256fc0 with catch @ 0225703c */
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(uVar6,uVar6);
      }
      uVar6 = (**(code **)(*plVar5 + 0x248))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x250));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(uVar6,uVar6);
      }
      lVar7 = System_Security_Cryptography_HashAlgorithm__ComputeHash_46fd600(plVar4,uVar6,0);
      plVar4 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9b78);
      System_Text_StringBuilder___ctor_46db688(plVar4,0x40,0);
      puVar1 = PTR_DAT_04caa3a0;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar3 = 0;
        uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          auStack_3c[0] = *(undefined1 *)(lVar7 + 0x20 + uVar3);
          uVar6 = System_Byte__ToString_47bb418(auStack_3c,*(undefined8 *)puVar1,0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224(uVar6,uVar6);
          }
                    /* catch() { ... } // from try @ 02257178 with catch @ 022570d8 */
          System_Text_StringBuilder__Append_46dcdf4(plVar4,uVar6,0);
          uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar2 = System_String__op_Equality_46d1108(uVar6,*(undefined8 *)PTR_DAT_04cab9b0,0);
      plVar4 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        lVar7 = *plStack_38;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04ca9b30) {
                    /* catch() { ... } // from try @ 02257174 with catch @ 0225718c */
              puVar8 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_02257190;
            }
            uVar3 = uVar3 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar3 != 0);
        }
                    /* try { // try from 02257174 to 02357177 has its CatchHandler @ 0225718c */
        puVar8 = (undefined8 *)FUN_0216b7a4(plStack_38,*(long *)PTR_DAT_04ca9b30,0);
                    /* try { // try from 02257178 to 023571c3 has its CatchHandler @ 022570d8 */
LAB_02257190:
        (*(code *)*puVar8)(plVar4,puVar8[1]);
      }
    }
    else {
      uVar2 = 0;
    }
  }
                    /* try { // try from 022571c4 to 02357227 has its CatchHandler @ 022571c4
                       catch(type#1 @ 00000000) { ... } // from try @ 022571c4 with catch @ 022571c4
                        */
  return uVar2 & 1;
}

