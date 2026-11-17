/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass125_0$$<OnLaneSpent>b__0
void Dino_BusSand_View_MechanicLayer___c__DisplayClass125_0___OnLaneSpent_b__0 (Dino_BusSand_View_MechanicLayer___c__DisplayClass125_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass125_0$$<OnLaneSpent>b__0
   void Dino_BusSand_View_MechanicLayer___c__DisplayClass125_0___OnLaneSpent_b__0
   (Dino_BusSand_View_MechanicLayer___c__DisplayClass125_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_View_MechanicLayer___c__DisplayClass125_0___OnLaneSpent_b__0_23d4c94
               (undefined4 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000004f9ca17 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd718);
    FUN_02132f7c(PTR_DAT_04cbd720);
    FUN_02132f7c(PTR_DAT_04cbd728);
    FUN_02132f7c(PTR_DAT_04cbd730);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca17 = 1;
  }
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  lStack_70 = 0;
  fVar8 = (float)Dino_BusSand_Easing__Evaluate_238b7d0(param_1,0xb,0);
  puVar3 = PTR_DAT_04cbd720;
  puVar2 = PTR_DAT_04cbd718;
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(long *)(param_2 + 0x10) != 0) {
    System_Collections_Generic_List_ValueTuple_object__Vector3____GetEnumerator_39bf73c
              (&uStack_80,*(long *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_04cbd730);
    fVar9 = 0.0;
    if (0.0 <= 1.0 - fVar8) {
      fVar9 = 1.0 - fVar8;
    }
    while( true ) {
      do {
        uVar7 = System_Collections_Generic_List_Enumerator_ValueTuple_object__Vector3____MoveNext_35bc704
                          (&uStack_80,*(undefined8 *)puVar3);
        uVar5 = uStack_68;
        lVar4 = lStack_70;
        if ((uVar7 & 1) == 0) {
          System_Collections_Generic_List_Enumerator_ValueTuple_object__Vector3____Dispose_35bc700
                    (&uStack_80,*(undefined8 *)puVar2);
          return;
        }
        fVar8 = uStack_68._4_4_;
        uVar6 = (undefined4)uStack_60;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
      } while ((uVar7 & 1) == 0);
      if (lVar4 == 0) break;
      UnityEngine_Transform__set_localScale_43d1be0(uVar5 & 0xffffffff,fVar9 * fVar8,uVar6,lVar4,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

