/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnChainReleased
void Dino_BusSand_View_MechanicLayer__OnChainReleased (Dino_BusSand_View_MechanicLayer_o* __this, int32_t chain, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnChainReleased
   void Dino_BusSand_View_MechanicLayer__OnChainReleased (Dino_BusSand_View_MechanicLayer_o* __this,
   int32_t chain, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnChainReleased_23ce308(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  puVar4 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c9fb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    bRam0000000004f9c9fb = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar4;
  }
  puVar4 = PTR_DAT_04cab238;
  if (**(long **)(lVar9 + 0xb8) != 0) {
    Dino_BusSand_GameAudio__Mechanic_2384944(0,0,**(long **)(lVar9 + 0xb8),7,0);
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Haptics__Play_2388ed8(2,0);
  puVar5 = PTR_DAT_04cae208;
  puVar4 = PTR_DAT_04cae200;
  lVar9 = *(long *)(param_1 + 0x68);
  if (lVar9 == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x38);
  uVar14 = *(undefined4 *)(param_1 + 0x50);
  if ((bRam0000000004f9c8cf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc090,param_2,lVar1,*(undefined8 *)(param_1 + 0x40),0);
    FUN_02132f7c(PTR_DAT_04cbc098);
    FUN_02132f7c(PTR_DAT_04cbc0a0);
    FUN_02132f7c(PTR_DAT_04cae218);
    FUN_02132f7c(PTR_DAT_04cae208);
    FUN_02132f7c(PTR_DAT_04cae200);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cbc0b8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c8cf = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Collections_Generic_HashSet_int____ctor_37daeb0(lVar7,*(undefined8 *)puVar5);
  puVar5 = PTR_DAT_04cbc098;
  puVar4 = PTR_DAT_04cae218;
  if (*(long *)(lVar9 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_b8,*(long *)(lVar9 + 0x30),*(undefined8 *)PTR_DAT_04cbc0b8);
  uVar3 = _UNK_00e20590;
  uStack_98 = puStack_b0;
  uStack_a0 = uStack_b8;
  lStack_90 = lStack_a8;
  uStack_b8 = 0;
  puStack_b0 = &uStack_a0;
  while( true ) {
    do {
      uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_a0,*(undefined8 *)puVar5);
      lVar6 = lStack_90;
      if ((uVar8 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_a0,*(undefined8 *)PTR_DAT_04cbc090);
        return;
      }
      if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    } while ((*(int *)(lStack_90 + 0x10) != param_2) || (0.0 <= *(float *)(lStack_90 + 0x54)));
    *(undefined4 *)(lStack_90 + 0x54) = 0;
    lVar11 = *(long *)(lVar9 + 0x20);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar11 = (**(code **)(lVar11 + 0x18))
                       (*(undefined8 *)(lVar11 + 0x40),*(undefined4 *)(lStack_90 + 0x18),
                        *(undefined8 *)(lVar11 + 0x28));
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
    if ((uVar8 & 1) != 0) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(char *)(lVar11 + 0x378) != '\0') {
        *(undefined1 *)(lVar11 + 0x379) = 1;
      }
    }
    lVar11 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70,2);
    if (lVar11 == 0) break;
    iVar10 = (int)*(ulong *)(lVar11 + 0x18);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(lVar6 + 0x14);
    if (iVar10 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(undefined4 *)(lVar11 + 0x24) = *(undefined4 *)(lVar6 + 0x18);
    if (0 < iVar10) {
      uVar8 = 0;
      uVar12 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar2 = *(undefined4 *)(lVar11 + 0x20 + uVar8 * 4);
        uVar12 = System_Collections_Generic_HashSet_int___Add_37dc0f0
                           (lVar7,uVar2,*(undefined8 *)puVar4);
        if ((uVar12 & 1) != 0) {
          lVar13 = *(long *)(lVar9 + 0x20);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar13 = (**(code **)(lVar13 + 0x18))
                             (*(undefined8 *)(lVar13 + 0x40),uVar2,*(undefined8 *)(lVar13 + 0x28));
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
          if ((uVar12 & 1) == 0) {
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            Dino_BusSand_View_VehicleView__Kick_23fd8a0(uVar3,0,lVar13,0);
            if (lVar1 != 0) {
              Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lVar13,0);
              uStack_d0 = 0;
              uStack_c8 = 0;
              uStack_c0 = 0;
              Dino_BusSand_View_Fx__Stars_2392818(lVar1,4,&uStack_d0);
            }
          }
        }
        uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar11 + 0x18));
    }
    Dino_BusSand_View_ChainRig__DropParts_2392b7c(uVar14,lVar9,lVar6,1,lVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

