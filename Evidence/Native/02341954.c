/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$Boot
void Dino_BusSand_App_Meta_LiveOps__Boot (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$Boot
   void Dino_BusSand_App_Meta_LiveOps__Boot (const MethodInfo* method); */

void Dino_BusSand_App_Meta_LiveOps__Boot_2241954(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  
  puVar2 = PTR_DAT_04cb3830;
  if ((bRam0000000004f9bf06 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3848);
    FUN_02132f7c(PTR_DAT_04cac668);
    FUN_02132f7c(PTR_DAT_04cb3850);
    FUN_02132f7c(PTR_DAT_04cb3830);
    bRam0000000004f9bf06 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_04cac668;
  puVar7 = *(undefined8 **)(lVar4 + 0xb8);
  lVar10 = puVar7[2];
  if (lVar10 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar11 = *puVar7;
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb3848);
    System_Action_object____ctor_35f0008(lVar10,uVar11,*(undefined8 *)PTR_DAT_04cb3850,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar5 = lVar10;
    thunk_FUN_02134474(plVar5,lVar10);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
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
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  plVar5 = *(long **)(lVar4 + 0xb8);
  if ((char)plVar5[1] != '\0') {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      plVar5 = *(long **)(*(long *)puVar2 + 0xb8);
    }
    if ((*plVar5 == 0) ||
       (lVar4 = System_Collections_Generic_List_object___ToArray_3a83728
                          (*plVar5,*(undefined8 *)PTR_DAT_04cb3840), puVar3 = PTR_DAT_04cb37e8,
       puVar2 = PTR_DAT_04cac458, lVar4 == 0)) {
LAB_02341914:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar12 = 0;
      do {
        if (uVar1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar5 = *(long **)(lVar4 + (long)(int)uVar12 * 8 + 0x20);
        if (plVar5 == (long *)0x0) goto LAB_02341914;
        lVar6 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_02341838;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_0216b7a4(plVar5,*(long *)puVar3,0);
LAB_02341838:
        uVar11 = (*(code *)*puVar7)(plVar5,puVar7[1]);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar8 = Dino_BusSand_App_Meta_FeatureGate__AllowsLiveFeature_220bdf0(uVar11,0);
        if ((uVar8 & 1) != 0) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          (**(code **)(lVar10 + 0x18))
                    (*(undefined8 *)(lVar10 + 0x40),plVar5,*(undefined8 *)(lVar10 + 0x28));
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar1);
    }
  }
  return;
}

