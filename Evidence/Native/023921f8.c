/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan.<>c__DisplayClass36_0$$<Validate>b__0
bool Dino_BusSand_App_Meta_TrackingPlan___c__DisplayClass36_0___Validate_b__0 (Dino_BusSand_App_Meta_TrackingPlan___c__DisplayClass36_0_o* __this, Dino_BusSand_App_Meta_TrackingPlan_Field_o f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan.<>c__DisplayClass36_0$$<Validate>b__0
   bool Dino_BusSand_App_Meta_TrackingPlan___c__DisplayClass36_0___Validate_b__0
   (Dino_BusSand_App_Meta_TrackingPlan___c__DisplayClass36_0_o* __this,
   Dino_BusSand_App_Meta_TrackingPlan_Field_o f, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_TrackingPlan___c__DisplayClass36_0___Validate_b__0_22921f8
               (long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *param_2;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar8 == lVar6) {
    return true;
  }
  if (lVar8 == 0) {
    return false;
  }
  if (lVar6 == 0) {
    return false;
  }
  if (*(int *)(lVar8 + 0x10) == *(int *)(lVar6 + 0x10)) {
    lVar7 = (long)*(int *)(lVar8 + 0x10) << 1;
    lVar8 = lVar8 + 0x14;
    lVar6 = lVar6 + 0x14;
    if (lVar8 != lVar6) {
      lVar2 = System_IntPtr__op_Explicit_4878324(0,0,lVar7,0);
      uVar3 = System_IntPtr__op_Explicit_4878330(lVar7,0);
      uVar4 = System_IntPtr__op_Explicit_487833c(uVar3,0);
      if (7 < uVar4) {
        lVar7 = System_IntPtr__op_Subtraction_4878350(uVar3,8,0);
        while( true ) {
          uVar4 = System_IntPtr__op_Explicit_487833c(lVar7,0);
          uVar5 = System_IntPtr__op_Explicit_487833c(lVar2,0);
          if (uVar4 <= uVar5) {
            return *(long *)(lVar8 + lVar7) == *(long *)(lVar6 + lVar7);
          }
          uVar4 = System_UIntPtr__op_Inequality_4886170
                            (*(undefined8 *)(lVar8 + lVar2),*(undefined8 *)(lVar6 + lVar2),0);
          if ((uVar4 & 1) != 0) break;
          lVar2 = System_IntPtr__op_Addition_4878348(lVar2,8,0);
        }
        return false;
      }
      uVar4 = System_IntPtr__op_Explicit_487833c(uVar3,0);
      uVar5 = System_IntPtr__op_Explicit_487833c(lVar2,0);
      if (uVar5 < uVar4) {
        do {
          bVar1 = *(char *)(lVar8 + lVar2) == *(char *)(lVar6 + lVar2);
          if (!bVar1) {
            return bVar1;
          }
          lVar2 = System_IntPtr__op_Addition_4878348(lVar2,1,0);
          uVar4 = System_IntPtr__op_Explicit_487833c(uVar3,0);
          uVar5 = System_IntPtr__op_Explicit_487833c(lVar2,0);
        } while (uVar5 < uVar4);
        return bVar1;
      }
    }
    return true;
  }
  return false;
}

