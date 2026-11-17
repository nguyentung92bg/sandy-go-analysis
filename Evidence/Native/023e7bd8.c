/* IL2CPP: Dino.BusSand.App.UI.HomeEntries.<>c__DisplayClass3_0$$<Register>b__0
bool Dino_BusSand_App_UI_HomeEntries___c__DisplayClass3_0___Register_b__0 (Dino_BusSand_App_UI_HomeEntries___c__DisplayClass3_0_o* __this, Dino_BusSand_App_UI_HomeEntry_o* x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeEntries.<>c__DisplayClass3_0$$<Register>b__0
   bool Dino_BusSand_App_UI_HomeEntries___c__DisplayClass3_0___Register_b__0
   (Dino_BusSand_App_UI_HomeEntries___c__DisplayClass3_0_o* __this, Dino_BusSand_App_UI_HomeEntry_o*
   x, const MethodInfo* method); */

bool Dino_BusSand_App_UI_HomeEntries___c__DisplayClass3_0___Register_b__0_22e7bd8
               (long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if ((param_2 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar2 = *(long *)(param_2 + 0x10);
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (lVar2 == lVar7) {
    return true;
  }
  if (lVar2 != 0) {
    if (lVar7 == 0) {
      return false;
    }
    if (*(int *)(lVar2 + 0x10) != *(int *)(lVar7 + 0x10)) {
      return false;
    }
    lVar8 = (long)*(int *)(lVar2 + 0x10) << 1;
    lVar2 = lVar2 + 0x14;
    lVar7 = lVar7 + 0x14;
    if (lVar2 != lVar7) {
      lVar3 = System_IntPtr__op_Explicit_4878324(0,0,lVar8,0);
      uVar4 = System_IntPtr__op_Explicit_4878330(lVar8,0);
      uVar5 = System_IntPtr__op_Explicit_487833c(uVar4,0);
      if (7 < uVar5) {
        lVar8 = System_IntPtr__op_Subtraction_4878350(uVar4,8,0);
        while( true ) {
          uVar5 = System_IntPtr__op_Explicit_487833c(lVar8,0);
          uVar6 = System_IntPtr__op_Explicit_487833c(lVar3,0);
          if (uVar5 <= uVar6) {
            return *(long *)(lVar2 + lVar8) == *(long *)(lVar7 + lVar8);
          }
          uVar5 = System_UIntPtr__op_Inequality_4886170
                            (*(undefined8 *)(lVar2 + lVar3),*(undefined8 *)(lVar7 + lVar3),0);
          if ((uVar5 & 1) != 0) break;
          lVar3 = System_IntPtr__op_Addition_4878348(lVar3,8,0);
        }
        return false;
      }
      uVar5 = System_IntPtr__op_Explicit_487833c(uVar4,0);
      uVar6 = System_IntPtr__op_Explicit_487833c(lVar3,0);
      if (uVar6 < uVar5) {
        do {
          bVar1 = *(char *)(lVar2 + lVar3) == *(char *)(lVar7 + lVar3);
          if (!bVar1) {
            return bVar1;
          }
          lVar3 = System_IntPtr__op_Addition_4878348(lVar3,1,0);
          uVar5 = System_IntPtr__op_Explicit_487833c(uVar4,0);
          uVar6 = System_IntPtr__op_Explicit_487833c(lVar3,0);
        } while (uVar6 < uVar5);
        return bVar1;
      }
    }
    return true;
  }
  return false;
}

