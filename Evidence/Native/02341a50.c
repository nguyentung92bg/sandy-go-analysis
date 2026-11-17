/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$LevelStart
void Dino_BusSand_App_Meta_LiveOps__LevelStart (int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$LevelStart
   void Dino_BusSand_App_Meta_LiveOps__LevelStart (int32_t level, const MethodInfo* method); */

void Dino_BusSand_App_Meta_LiveOps__LevelStart_2241a50(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  
  puVar2 = PTR_DAT_04cb3858;
  if ((bRam0000000004f9bf07 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3848);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cb3860);
    FUN_02132f7c(PTR_DAT_04cb3858);
    bRam0000000004f9bf07 = 1;
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar7,0);
  puVar4 = PTR_DAT_04cb3860;
  puVar3 = PTR_DAT_04cb3848;
  puVar2 = PTR_DAT_04cac668;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined4 *)(lVar7 + 0x10) = param_1;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Action_object____ctor_35f0008(lVar8,lVar7,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cac668;
  if ((bRam0000000004f9bf05 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cb37e8);
    FUN_02132f7c(PTR_DAT_04cb3840);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9bf05 = 1;
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  plVar9 = *(long **)(lVar7 + 0xb8);
  if ((char)plVar9[1] != '\0') {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      plVar9 = *(long **)(*(long *)puVar2 + 0xb8);
    }
    if ((*plVar9 == 0) ||
       (lVar7 = System_Collections_Generic_List_object___ToArray_3a83728
                          (*plVar9,*(undefined8 *)PTR_DAT_04cb3840), puVar3 = PTR_DAT_04cb37e8,
       puVar2 = PTR_DAT_04cac458, lVar7 == 0)) {
LAB_02341914:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar13 = 0;
      do {
        if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar9 = *(long **)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
        if (plVar9 == (long *)0x0) goto LAB_02341914;
        lVar10 = *plVar9;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_02341838;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_0216b7a4(plVar9,*(long *)puVar3,0);
LAB_02341838:
        uVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar11 = Dino_BusSand_App_Meta_FeatureGate__AllowsLiveFeature_220bdf0(uVar6,0);
        if ((uVar11 & 1) != 0) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          (**(code **)(lVar8 + 0x18))
                    (*(undefined8 *)(lVar8 + 0x40),plVar9,*(undefined8 *)(lVar8 + 0x28));
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar1);
    }
  }
  return;
}

