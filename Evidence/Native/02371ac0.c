/* IL2CPP: Dino.BusSand.App.Meta.Profile$$NewSession
void Dino_BusSand_App_Meta_Profile__NewSession (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$NewSession
   void Dino_BusSand_App_Meta_Profile__NewSession (const MethodInfo* method); */

long Dino_BusSand_App_Meta_Profile__NewSession_2271ac0(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  
  puVar3 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0f2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0f2 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 02371afc to 02471b1b has its CatchHandler @ 02371fc8 */
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0f3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb47f0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0f3 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar10 = Dino_BusSand_App_Meta_Profile__Day_2271100();
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar11 = *(long *)puVar3;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar3;
    lVar16 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(puVar3);
      lVar11 = *(long *)puVar3;
      cRam0000000004f9b894 = '\x01';
    }
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar3;
  }
  cVar9 = cRam0000000004f9b894;
  lVar14 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
  if ((lVar14 != 0) && (lVar16 != 0)) {
    *(undefined8 *)(lVar16 + 0x168) = *(undefined8 *)(lVar14 + 0xb8);
    if (cVar9 == '\0') {
      FUN_02132f7c(puVar3);
      lVar11 = *(long *)puVar3;
      cRam0000000004f9b894 = '\x01';
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar3;
    }
    lVar16 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar16 != 0) {
      if (*(long *)(lVar16 + 0xb8) != lVar10) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar3;
        }
        cVar9 = cRam0000000004f9b894;
        lVar16 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
        if (lVar16 == 0) goto LAB_0237108c;
        *(int *)(lVar16 + 0xb0) = *(int *)(lVar16 + 0xb0) + 1;
        if (cVar9 == '\0') {
          FUN_02132f7c(puVar3);
          lVar11 = *(long *)puVar3;
          cRam0000000004f9b894 = '\x01';
        }
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar3;
        }
        cVar9 = cRam0000000004f9b894;
        lVar16 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
        if (lVar16 == 0) goto LAB_0237108c;
        *(long *)(lVar16 + 0xb8) = lVar10;
        if (cVar9 == '\0') {
          FUN_02132f7c(puVar3);
          lVar11 = *(long *)puVar3;
          cRam0000000004f9b894 = '\x01';
        }
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar3;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
        if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x100), lVar11 == 0)) goto LAB_0237108c;
        iVar1 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear_4851dc8(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
        }
        Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
        lVar11 = *(long *)puVar3;
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar3 = PTR_DAT_04cabaf8;
      if ((bRam0000000004f9c0f4 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cad218);
        FUN_02132f7c(PTR_DAT_04cad220);
        FUN_02132f7c(PTR_DAT_04cad228);
        FUN_02132f7c(PTR_DAT_04cad240);
        FUN_02132f7c(PTR_DAT_04cad248);
        FUN_02132f7c(PTR_DAT_04cad230);
        FUN_02132f7c(PTR_DAT_04cb4800);
        FUN_02132f7c(PTR_DAT_04cad258);
        FUN_02132f7c(PTR_DAT_04cb1cc8);
        FUN_02132f7c(PTR_DAT_04cad260);
        FUN_02132f7c(PTR_DAT_04cabaf8);
        bRam0000000004f9c0f4 = 1;
      }
      uStack_70 = 0;
      puStack_68 = (undefined8 *)0x0;
      lStack_60 = 0;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar11 = *(long *)puVar3;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar3;
      }
      lVar16 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
      if (lVar16 != 0) {
        if (*(long *)(lVar16 + 0x170) == 0) {
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b894 == '\0') {
            FUN_02132f7c(PTR_DAT_04cabaf8);
            cRam0000000004f9b894 = '\x01';
          }
          lVar11 = *(long *)puVar3;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar11 = *(long *)puVar3;
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
          uVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad260);
          System_Collections_Generic_List_object____ctor_3a8138c
                    (uVar12,*(undefined8 *)PTR_DAT_04cad258);
          if (lVar11 == 0) goto LAB_02371f3c;
          *(undefined8 *)(lVar11 + 0x170) = uVar12;
          thunk_FUN_02134474(lVar11 + 0x170,uVar12);
          lVar11 = *(long *)puVar3;
        }
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar11 = *(long *)puVar3;
        }
        puVar8 = PTR_DAT_04cb4800;
        puVar7 = PTR_DAT_04cad248;
        puVar6 = PTR_DAT_04cad240;
        puVar5 = PTR_DAT_04cad220;
        puVar4 = PTR_DAT_04cad218;
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
        if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x170), lVar11 != 0)) {
          System_Collections_Generic_List_object___GetEnumerator_3a825f0
                    (&uStack_88,lVar11,*(undefined8 *)PTR_DAT_04cad230);
          lStack_60 = lStack_78;
          puStack_68 = puStack_80;
          uStack_70 = uStack_88;
          uStack_88 = 0;
          puStack_80 = &uStack_70;
          while( true ) {
            uVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_70,*(undefined8 *)puVar5);
            lVar11 = lStack_60;
            if ((uVar13 & 1) == 0) break;
            if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (*(int *)(lStack_60 + 0x10) == (int)lVar10) {
              System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                        (&uStack_70,*(undefined8 *)puVar4);
              return lVar11;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                    (&uStack_70,*(undefined8 *)puVar4);
          lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar6);
          System_Object___ctor_4870e5c(lVar11,0);
          if (lVar11 != 0) {
            lVar16 = *(long *)puVar3;
            *(int *)(lVar11 + 0x10) = (int)lVar10;
            *(undefined8 *)(lVar11 + 0x18) = 0;
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (cRam0000000004f9b894 == '\0') {
              FUN_02132f7c(PTR_DAT_04cabaf8);
              cRam0000000004f9b894 = '\x01';
            }
            lVar10 = *(long *)puVar3;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar10 = *(long *)puVar3;
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
            if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x170), lVar10 != 0)) {
              lVar16 = *(long *)(lVar10 + 0x10);
              lVar14 = *(long *)puVar7;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar16 != 0) {
                uVar2 = *(uint *)(lVar10 + 0x18);
                if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar2 + 1;
                  plVar15 = (long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
                  *plVar15 = lVar11;
                  thunk_FUN_02134474(plVar15,lVar11);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar10,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
                while( true ) {
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  if (cRam0000000004f9b894 == '\0') {
                    FUN_02132f7c(PTR_DAT_04cabaf8);
                    cRam0000000004f9b894 = '\x01';
                  }
                  lVar10 = *(long *)puVar3;
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar10 = *(long *)puVar3;
                  }
                  lVar16 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
                  if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x170), lVar16 == 0)) break;
                  if (*(int *)(lVar16 + 0x18) < 8) {
                    return lVar11;
                  }
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  if (cRam0000000004f9b894 == '\0') {
                    FUN_02132f7c(PTR_DAT_04cabaf8);
                    cRam0000000004f9b894 = '\x01';
                  }
                  lVar10 = *(long *)puVar3;
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                    lVar10 = *(long *)puVar3;
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
                  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x170), lVar10 == 0)) break;
                  System_Collections_Generic_List_object___RemoveAt_3a833a0
                            (lVar10,0,*(undefined8 *)puVar8);
                }
              }
            }
          }
        }
      }
LAB_02371f3c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_0237108c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

